#include "Matrix.h"



Matrix::Matrix(int nrow, int ncol) {
	size[0] = nrow;
	size[1] = ncol;
	matrix = new float*[nrow];
	for (int i = 0; i < nrow; i++)
	{
		matrix[i] = new float[ncol];
		for (int k = 0; k < ncol; k++)
		{
			matrix[i][k] = 0.f;
		}
	}
};

Matrix* Matrix::operator+(Matrix* res) {
	if ((res->size[0] != size[0]) || (res->size[1] != size[1]))
		throw 1;
	for (int i = 0; i < size[0]; i++)
	{
		for (int k = 0; k < size[1]; k++)
		{
			res->matrix[i][k] += this->matrix[i][k];
		}
	}
	return res;
};

Matrix* Matrix::operator+(float num) {
	for (int i = 0; i < size[0]; i++)
	{
		for (int k = 0; k < size[1]; k++)
		{
			this->matrix[i][k] += num;
		}
	}
	return this;
};

Matrix* Matrix::operator-(Matrix* res) {
	if ((res->size[0] != size[0]) || (res->size[1] != size[1]))
		throw 1;
	for (int i = 0; i < size[0]; i++)
	{
		for (int k = 0; k < size[1]; k++)
		{
			res->matrix[i][k] -= this->matrix[i][k];
		}
	}
	return res;
};

Matrix* Matrix::operator-(float num) {
	for (int i = 0; i < size[0]; i++)
	{
		for (int k = 0; k < size[1]; k++)
		{
			this->matrix[i][k] -= num;
		}
	}
	return this;
};

Matrix* Matrix::operator*(Matrix* res) {
	if ((res->size[0] != size[0]) || (res->size[1] != size[1]))
		throw 1;
	for (int i = 0; i < size[0]; i++)
	{
		for (int k = 0; k < size[1]; k++)
		{
			res->matrix[i][k] *= this->matrix[i][k];
		}
	}
	return res;
};

Matrix* Matrix::operator*(float num) {
	for (int i = 0; i < size[0]; i++)
	{
		for (int k = 0; k < size[1]; k++)
		{
			this->matrix[i][k] *= num;
		}
	}
	return this;
};

Matrix* Matrix::dot(Matrix* m) {
	if (this->size[1] != m->size[0])
		throw 2;
	Matrix* res = new Matrix(this->size[0], m->size[1]);
	for (int i = 0; i < size[0]; i++) {
		for (int j = 0; j < m->size[1]; j++) {
			for (int k = 0; k < this->size[1]; k++)
			{
				res->matrix[i][j] += this->matrix[i][k] * m->matrix[k][j];
			}
		}
	}
	return res;
};

Matrix* Matrix::copy() {
	Matrix* res = new Matrix(size[0], size[1]);
	for (int i = 0; i < size[0]; i++)
	{
		for (int k = 0; k < size[1]; k++)
		{
			res->matrix[i][k] = matrix[i][k];
		}
	}
	return res;
}

Matrix::~Matrix() {
	for (size_t i = 0; i < size[0]; i++)
	{
		free(matrix[i]);
	}
	free(matrix);
};
#include "Matrix.h"



Matrix::Matrix(int nrow, int ncol) {
	size[0] = nrow;
	size[1] = ncol;
	matrix = new int*[nrow];
	for (int i = 0; i < nrow; i++)
	{
		matrix[i] = new int[ncol];
		for (int k = 0; k < ncol; k++)
		{
			matrix[i][k] = 0;
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

Matrix::~Matrix() {
	for (size_t i = 0; i < size[0]; i++)
	{
		free(matrix[i]);
	}
	free(matrix);
};
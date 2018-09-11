#pragma once

#include <cstdlib>

class Matrix
{
public:
	int size[2];
	float** matrix;

	Matrix();
	Matrix(int nrow, int ncol);

	Matrix* operator+ (Matrix*);
	Matrix* operator+ (float);
	Matrix* operator- (Matrix*);
	Matrix* operator- (float);
	Matrix* operator* (Matrix*);
	Matrix* operator* (float);

	Matrix* dot(Matrix*);
	Matrix* sign();

	float norm();

	void print();

	Matrix* copy();

	~Matrix();
};


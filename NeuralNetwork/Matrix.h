#pragma once

#include <cstdlib>

class Matrix
{
public:
	int size[2];
	int** matrix;

	Matrix(int nrow, int ncol);

	Matrix* operator+ (Matrix*);

	~Matrix();
};


#pragma once

#include "Matrix.h"

Matrix* one_hot(int*, int);

float compute_cost(Matrix* A1, Matrix* Y);

class NN
{
public:
	NN();
	~NN();
};


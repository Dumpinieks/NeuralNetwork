#include "NN.h"
#include <cmath>

Matrix* one_hot(int* examples, int n_examples, int n_classes) {
	Matrix* res = new Matrix(n_classes, n_examples);
	for (int i = 0; i < n_examples; i++)
	{
		res->matrix[examples[i]][i] = 1;
	}
	return res;
}

float compute_cost(Matrix* A2, Matrix* Y) {
	int m = A2->size[1];
	float cost = 0.f;
	for (int i = 0; i < A2->size[0]; i++)
	{
		for (int j = 0; j < A2->size[1]; j++)
		{
			cost += Y->matrix[i][j] * log(A2->matrix[i][j]) + (1 - Y->matrix[i][j]) * log(1 - A2->matrix[i][j]);
		}
	}
	cost *= -1.f / m;
	return cost;
}

NN::NN()
{
}


NN::~NN()
{
}

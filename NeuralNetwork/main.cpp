#include <iostream>
#include "Matrix.h"
#include "NN.h"

int main() {
	Matrix* m = new Matrix(2, 3);
	Matrix* m2 = new Matrix(2, 3);
	m->matrix[0][0] = 1.f;
	m->matrix[1][1] = 1.f;
	m2->matrix[0][0] = 0.5f;
	m2->matrix[0][1] = 0.49f;
	m2->matrix[0][2] = 0.5f;
	m2->matrix[1][0] = 0.1f;
	m2->matrix[1][1] = .2f;
	m2->matrix[1][2] = .3f;
	std::cout << compute_cost(m2, m);
	getchar();
}
#include <iostream>
#include "Matrix.h"
#include "NN.h"
#define nrow 10000
#define ncol 5

void func(float** matrix) {
	for (int i = 0; i < nrow; i++)
	{
		matrix[i] = new float[ncol];
		for (int k = 0; k < ncol; k++)
		{
			matrix[i][k] = 0.f;
		}
	}
}
int main() {
	Matrix* m = new Matrix(10000000, 3);
	delete m;
	getchar();
}
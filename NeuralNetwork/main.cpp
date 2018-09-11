#include <iostream>
#include "Matrix.h"
#include "NN.h"

int main() {
	Matrix m(2, 3);
	for (size_t i = 0; i < 1000000; i++)
	{
		m = m + m;
	}
	getchar();
}
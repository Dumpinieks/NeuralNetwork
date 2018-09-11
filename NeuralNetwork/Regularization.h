#pragma once

#include "Matrix.h"

class Regularization
{
public:
	float lambda1;
	float lambda2;

	Regularization(float, float);

	float l1(Matrix*, Matrix*, int);
	Matrix* l1_grad(Matrix*, Matrix*, int);

	~Regularization();
};
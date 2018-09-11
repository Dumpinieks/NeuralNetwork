#include "Regularization.h"



Regularization::Regularization(float Lambda1, float Lambda2)
{
	lambda1 = Lambda1;
	lambda2 = Lambda2;
}

float Regularization::l1(Matrix* W1, Matrix* W2, int m) {
	float l1_term;
	l1_term = this->lambda1 / m * W1->norm() + W2->norm();
	return l1_term;
}

Matrix* Regularization::l1_grad(Matrix* W1, Matrix* W2, int m) {
	Matrix* res = new Matrix[2];
	res[0] = *(W1->sign) * (this->lambda1 / m);
	res[1] = *(W2->sign) * (this->lambda1 / m);
	return res;
}

Regularization::~Regularization()
{
}

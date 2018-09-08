#pragma once
class Regularization
{
public:
	float lambda1;
	float lambda2;

	Regularization(float, float);
	~Regularization();
};


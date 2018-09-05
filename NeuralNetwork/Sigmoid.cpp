#include "Sigmoid.h"


float Sigmoid::value(float num) {
	return  1.f / (1.f + exp(-num));
};

float Sigmoid::prime(float num) {
	float sigm = value(num);
	return sigm * (1.f - sigm);
};
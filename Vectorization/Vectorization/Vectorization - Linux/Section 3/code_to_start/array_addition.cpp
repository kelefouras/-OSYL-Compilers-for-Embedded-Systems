#include "array_addition.h"

float  X1[M], X2[M], Y1[M], test2[M] __attribute__((aligned(64))); 

void initialization_Add() {

	float e = 0.1234, p = 0.7264, r = 0.11;


	for (unsigned int j = 0; j != M; j++) {
		Y1[j] = 0.0;
		test2[j] = 0.0;
		X1[j] = (j % 7) + r;
		X2[j] = (j % 13) + e;
	}
}


unsigned short int Add_default() {

		for (int j = 0; j < M; j++) {
			Y1[j] = X1[j] + X2[j];
		}
	

	return 0;
}

unsigned short int Add_SSE() {

	__m128 num0, num1, num2, num3, num4, num5, num6;

	//write your code here

		
	return 0;
}


unsigned short int Add_AVX() {

	__m256  ymm0, ymm1, ymm2, ymm3, ymm4;

//write your code here


	return 0;
}


unsigned short int Compare_Add() {


		for (int j = 0; j < M; j++) {
			test2[j] = X1[j] + X2[j];
		}
	

	for (int j = 0; j < M; j++)
		if (equal(Y1[j], test2[j]) == 1) {
			//printf("\n j=%d\n", j);
			return 1;
		}

	return 0;
}




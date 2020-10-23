#pragma once


#include <math.h>
#include <stdio.h>
#include <emmintrin.h>
#include <limits.h>
#include <pmmintrin.h>
#include <immintrin.h>
#include <stdint.h>	/* for uint64 definition */
#include <sched.h>
#include <pthread.h>
#include <sys/syscall.h>
#include <sys/mman.h>
#include <omp.h>

//MVM initialization 
#define M 64
static float  X1[M], X2[M], Y1[M], test2[M] __attribute__((aligned(64))); //use static as they must be visible only in MVM.cpp file

void initialization_Add();

unsigned short int Add_default();
unsigned short int Add_SSE();
unsigned short int Add_AVX();
unsigned short int Compare_Add();
extern unsigned short int equal(float const a, float const b); //used extern as this is defined in MVM.h

#define EPSILON 0.01



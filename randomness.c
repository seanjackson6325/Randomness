/****************************************************************
*
* Author: Sean Jackson
* Last Modified: 04/15/22
* Description: Source file for Randomness random value generator
*
****************************************************************/

#include <stdlib.h>
#include <time.h>
#include "randomness.h"

/////////////////////////////////////////////////////////////////

// initialize Randomness library tools
// must be called before any other functions
void Rand_Init()
{
	Rand_SetSeed(time(0));
}

// set the generator seed for Randomness
// this can be called instead of Rand_Init()
void Rand_SetSeed(int seed)
{
	srand(seed);
}

/////////////////////////////////////////////////////////////////

// returns random integer
// [0, RAND_MAX] (inclusive)
int Rand_I()
{
	return rand();
}

// returns random integer in range
// [min, max] (inclusive)
int Rand_IRange(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}

/////////////////////////////////////////////////////////////////

// returns random float
// [0.0f, 1.0f] (inclusive)
float Rand_F()
{
	return (float)rand() / RAND_MAX;
}

// returns random float in range
// [min, max] (inclusive)
float Rand_FRange(float min, float max)
{
	return (max - min) * ((float)rand() / RAND_MAX) + min;
}

/////////////////////////////////////////////////////////////////

// returns random double
// [0.0f, 1.0f] (inclusive)
float Rand_D()
{
	return (double)rand() / RAND_MAX;
}

// returns random double in range
// [min, max] (inclusive)
float Rand_DRange(double min, double max)
{
	return (max - min) * ((double)rand() / RAND_MAX) + min;
}

/////////////////////////////////////////////////////////////////
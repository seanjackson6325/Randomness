/****************************************************************
*
* Author: Sean Jackson
* Last Modified: 04/15/22
* Description: Header file for Randomness random value generator
*
****************************************************************/

#pragma once

/////////////////////////////////////////////////////////////////

// initialize Randomness library tools
// must be called before any other functions
void Rand__Init();

// set the generator seed for Randomness
// this can be called instead of Rand_Init()
void Rand__SetSeed(int seed);

/////////////////////////////////////////////////////////////////

// returns random integer
// [0, RAND_MAX] (inclusive)
int Rand__I();

// returns random integer in range
// [min, max] (inclusive)
int Rand__IRange(int min, int max);

/////////////////////////////////////////////////////////////////

// returns random float
// [0.0f, 1.0f] (inclusive)
float Rand__F();

// returns random float in range
// [min, max] (inclusive)
float Rand__FRange(float min, float max);

/////////////////////////////////////////////////////////////////

// returns random double
// [0.0f, 1.0f] (inclusive)
float Rand__D();

// returns random double in range
// [min, max] (inclusive)
float Rand__DRange(double min, double max);

/////////////////////////////////////////////////////////////////
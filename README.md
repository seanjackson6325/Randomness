# Randomness

An easy to use random number generator for C/C++.
The goal of this library is to greatly reduce code duplication for generating random numbers.
The functions behave similarly to those in the Random package in Java.


## Functions:


#### Rand__Init()
- Must be called before generating any random values. Sets a random seed for generation. Alternatively, "Rand__SetSeed" can be called to set a specific seed.

#### Rand__SetSeed(int seed)
- Used to set a specific seed for the value generator.

#### Rand__Int()
- Returns a random integer between 0 and RAND_MAX (from stdlib), inclusive.

#### Rand__IntRange(int min, int max)
- Returns a random integer between min and max, inclusive.

#### Rand__Float()
- Returns a random float between 0 and 1.0f, inclusive.

#### Rand__FloatRange(int min, int max)
- Returns a random float between min and max, inclusive.

#### Rand__Double()
- Returns a random double between 0 and 1.0, inclusive.

#### Rand__DoubleRange(int min, int max)
- Returns a random double between min and max, inclusive.

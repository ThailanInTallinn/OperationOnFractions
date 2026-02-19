#ifndef MATH_UTILS_H
#define MATH_UTILS_H

struct fraction {
	int numerator;
	int denominator;
};

int find_gcd(int, int);
void divide_to_lowest_terms(int *, int *, int);

#endif

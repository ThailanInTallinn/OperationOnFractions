#ifndef MATH_UTILS_H
#define MATH_UTILS_H

struct fraction {
	int numerator;
	int denominator;
};

int find_gcd(int, int);
void divide_to_lowest_terms(int *, int *, int);
struct fraction subtract_fractions(struct fraction *, struct fraction *);
struct fraction add_fractions(struct fraction *, struct fraction *);
struct fraction multiply_fractions(struct fraction *, struct fraction *);
struct fraction divide_fractions(struct fraction *, struct fraction *);




#endif

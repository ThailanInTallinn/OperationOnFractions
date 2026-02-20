#include "math_utils.h"
int find_gcd(int numerator, int denominator){
	int biggest  = denominator > numerator? denominator : numerator;
	int gcd = 0, i;
	for(i = 1; i < biggest / 2; i++){
		if(denominator % i == 0 && numerator % i == 0)
			gcd = i;
	}
	return gcd;
}

void divide_to_lowest_terms(int *numerator, int *denominator, int gcd){
	*numerator /= gcd;
	*denominator /= gcd;
}

struct fraction subtract_fractions(struct fraction *a, struct fraction *b){
	int new_num_a = 0, new_num_b = 0, new_den = 0;
	int new_num = 0, gcd = 0;
	new_num_a += ((*a).numerator * ((*b).denominator));
	new_den += ((*a).denominator * ((*b).denominator));
	new_num_b += ((*b).numerator * ((*a).denominator));

	new_num += (new_num_a - new_num_b);
	gcd = find_gcd(new_num, new_den);
	divide_to_lowest_terms(&new_num, &new_den, gcd);
	struct fraction c = {.numerator = new_num, .denominator = new_den};

	return c;
}

struct fraction add_fractions(struct fraction *a, struct fraction *b){
	int new_num_a = 0, new_num_b = 0, new_den = 0;
	int new_num = 0, gcd = 0;
	new_num_a += ((*a).numerator * ((*b).denominator));
	new_den += ((*a).denominator * ((*b).denominator));
	new_num_b += ((*b).numerator * ((*a).denominator));

	new_num += (new_num_a + new_num_b);
	gcd = find_gcd(new_num, new_den);
	divide_to_lowest_terms(&new_num, &new_den, gcd);
	struct fraction c = {.numerator = new_num, .denominator = new_den};

	return c;
}

struct fraction multiply_fractions(struct fraction *a, struct fraction *b){
	int new_num = 0, new_den = 0, gcd;
	new_num += ((*a).numerator * (*b).numerator);
	new_den += ((*a).denominator * (*b).denominator);
	gcd = find_gcd(new_num, new_den);
	divide_to_lowest_terms(&new_num, &new_den, gcd);

	return ((struct fraction){.numerator = new_num, .denominator = new_den});
}

struct fraction divide_fractions(struct fraction *a, struct fraction *b){
    	int new_num = 0, new_den = 0;
	new_num += (*a).numerator * (*b).denominator;
	new_den += (*a).denominator * (*b).numerator;
	return ((struct fraction){.numerator = new_num, .denominator = new_den});
}

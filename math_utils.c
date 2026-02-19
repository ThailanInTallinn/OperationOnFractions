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

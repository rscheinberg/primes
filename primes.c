#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "primes.h"

int prime (int n) {

	int i = 2;
	int last_prime;
	
	int upper = (int) (n * log(n) * 1.15) + 10;
	int primes[upper];
	for(int index = 0; index < upper; index++) primes[index] = 1;
	
	while(n) {
		for(int k = 2 * i; k < upper; k += i) {
			primes[k] = 0;
		}
		if(primes[i]) {
			last_prime = i;
			n--;
		}
		i++;
	}
	
	return last_prime;
	
}
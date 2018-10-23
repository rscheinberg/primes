#include <stdlib.h>
#include <stdio.h>
#include "primes.c"

int main(){
	
	printf("Printing nth prime:\n");
	printf("%d: %d\n", 1, prime(1));
	printf("%d: %d\n", 2, prime(2));
	printf("%d: %d\n", 5, prime(5));
	printf("%d: %d\n", 10, prime(10));
	printf("%d: %d\n", 13, prime(13));
	printf("%d: %d\n", 20, prime(20));
	
}
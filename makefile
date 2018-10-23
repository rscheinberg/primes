all: main.o
	gcc -o prime main.o

main.o: primes.o
	gcc -c main.c
	
primes.o:
	gcc -c primes.c

run:
	./prime
	
clean:
	rm *.o
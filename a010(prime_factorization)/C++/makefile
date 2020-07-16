.PHONY: clean directories

all: directories bin/prime_factorization

bin/prime_factorization: prime_factorization.cpp
	g++ -std=c++11 prime_factorization.cpp -o bin/prime_factorization

directories:
	mkdir -p bin

clean:
	rm -rf bin

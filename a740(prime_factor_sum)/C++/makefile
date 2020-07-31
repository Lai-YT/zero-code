.PHONY: clean directories

all: directories bin/prime_factor_sum

bin/prime_factor_sum: prime_factor_sum.cpp
	g++ -std=c++11 prime_factor_sum.cpp -o bin/prime_factor_sum

directories:
	mkdir -p bin

clean:
	rm -rf bin

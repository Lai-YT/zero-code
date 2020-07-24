.PHONY: clean directories

all: directories bin/prime_factor

bin/prime_factor: prime_factor.cpp
	g++ -std=c++11 prime_factor.cpp -o bin/prime_factor

directories:
	mkdir -p bin

clean:
	rm -rf bin

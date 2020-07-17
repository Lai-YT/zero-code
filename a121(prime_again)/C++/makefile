.PHONY: clean directories

all: directories bin/prime_again

bin/prime_again: prime_again.cpp
	g++ -std=c++11 prime_again.cpp -o bin/prime_again

directories:
	mkdir -p bin

clean:
	rm -rf bin

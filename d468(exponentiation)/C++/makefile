.PHONY: clean directories

all: directories bin/exponentiation

bin/exponentiation: exponentiation.cpp
	g++ -std=c++11 exponentiation.cpp -o bin/exponentiation

directories:
	mkdir -p bin

clean:
	rm -rf bin

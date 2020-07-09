.PHONY: clean directories

all: directories bin/prime

bin/prime: prime.cpp
	g++ -std=c++11 prime.cpp -o bin/prime

directories:
	mkdir -p bin

clean:
	rm -rf bin

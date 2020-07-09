.PHONY: clean directories

all: directories bin/gcd

bin/gcd: gcd.cpp
	g++ -std=c++11 gcd.cpp -o bin/gcd

directories:
	mkdir -p bin

clean:
	rm -rf bin

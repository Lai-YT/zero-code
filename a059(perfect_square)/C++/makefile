.PHONY: clean directories

all: directories bin/perfect_square

bin/perfect_square: perfect_square.cpp
	g++ -std=c++11 perfect_square.cpp -o bin/perfect_square

directories:
	mkdir -p bin

clean:
	rm -rf bin

.PHONY: clean directories

all: directories bin/simple_addition

bin/simple_addition: simple_addition.cpp
	g++ -std=c++11 simple_addition.cpp -o bin/simple_addition

directories:
	mkdir -p bin

clean:
	rm -rf bin

.PHONY: clean directories

all: directories bin/large_number_1

bin/large_number_1: large_number_1.cpp
	g++ -std=c++11 large_number_1.cpp -o bin/large_number_1

directories:
	mkdir -p bin

clean:
	rm -rf bin

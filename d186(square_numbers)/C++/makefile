.PHONY: directories clean

all: directories bin/square_numbers

bin/square_numbers: square_numbers.cpp
	g++ -std=c++11 square_numbers.cpp -o bin/square_numbers

directories:
	mkdir -p bin

clean:
	rm -rf bin

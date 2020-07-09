.PHONY: clean directories

all: directories bin/armstrong_numbers

bin/armstrong_numbers: armstrong_numbers.cpp
	g++ -std=c++11 armstrong_numbers.cpp -o bin/armstrong_numbers

directories:
	mkdir -p bin

clean:
	rm -rf bin

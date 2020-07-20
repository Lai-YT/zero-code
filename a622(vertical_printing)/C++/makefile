.PHONY: clean directories

all: directories bin/vertical_printing

bin/vertical_printing: vertical_printing.cpp
	g++ -std=c++11 vertical_printing.cpp -o bin/vertical_printing

directories:
	mkdir -p bin

clean:
	rm -rf bin

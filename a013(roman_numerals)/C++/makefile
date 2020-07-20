.PHONY: clean directories

all: directories bin/roman_numerals

bin/roman_numerals: roman_numerals.cpp
	g++ -std=c++14 roman_numerals.cpp -o bin/roman_numerals

directories:
	mkdir -p bin

clean:
	rm -rf bin

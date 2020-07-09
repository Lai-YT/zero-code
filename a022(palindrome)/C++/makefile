.PHONY: clean directories

all: directories bin/palindrome

bin/palindrome: palindrome.cpp
	g++ -std=c++11 palindrome.cpp -o bin/palindrome

directories:
	mkdir -p bin

clean:
	rm -rf bin

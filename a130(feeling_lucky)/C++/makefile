.PHONY: clean directories

all: directories bin/feeling_lucky

bin/feeling_lucky: feeling_lucky.cpp
	g++ -std=c++11 feeling_lucky.cpp -o bin/feeling_lucky

directories:
	mkdir -p bin

clean:
	rm -rf bin

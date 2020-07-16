.PHONY: clean directories

all: directories bin/sort

bin/sort: sort.cpp
	g++ -std=c++11 sort.cpp -o bin/sort

directories:
	mkdir -p bin

clean:
	rm -rf bin

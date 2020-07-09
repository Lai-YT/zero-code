.PHONY: clean directories

all: directories bin/transpose

bin/transpose: transpose.cpp
	g++ -std=c++11 transpose.cpp -o bin/transpose

directories:
	mkdir -p bin

clean:
	rm -rf bin

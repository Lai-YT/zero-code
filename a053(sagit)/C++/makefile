.PHONY: clean directories

all: directories bin/sagit

bin/sagit: sagit.cpp
	g++ -std=c++11 sagit.cpp -o bin/sagit

directories:
	mkdir -p bin

clean:
	rm -rf bin

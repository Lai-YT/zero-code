.PHONY: clean directories

all: directories bin/meteorite

bin/meteorite: meteorite.cpp
	g++ -std=c++11 meteorite.cpp -o bin/meteorite

directories:
	mkdir -p bin

clean:
	rm -rf bin

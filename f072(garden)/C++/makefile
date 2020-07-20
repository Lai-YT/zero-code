.PHONY: clean directories

all: directories bin/garden

bin/garden: garden.cpp
	g++ -std=c++11 garden.cpp -o bin/garden

directories:
	mkdir -p bin

clean:
	rm -rf bin

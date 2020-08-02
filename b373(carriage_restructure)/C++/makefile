.PHONY: clean directories

all: directories bin/carriage_restructure

bin/carriage_restructure: carriage_restructure.cpp
	g++ -std=c++11 carriage_restructure.cpp -o bin/carriage_restructure

directories:
	mkdir -p bin

clean:
	rm -rf bin

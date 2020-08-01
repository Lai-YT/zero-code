.PHONY: clean directories

all: directories bin/conformity

bin/conformity: conformity.cpp
	g++ -std=c++11 conformity.cpp -o bin/conformity

directories:
	mkdir -p bin

clean:
	rm -rf bin

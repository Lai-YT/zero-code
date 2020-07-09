.PHONY: clean directories

all: directories bin/divination

bin/divination: divination.cpp
	g++ -std=c++11 divination.cpp -o bin/divination

directories:
	mkdir -p bin

clean:
	rm -rf bin

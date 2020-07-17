.PHONY: clean directories

all: directories bin/conspiracy

bin/conspiracy: conspiracy.cpp
	g++ -std=c++11 conspiracy.cpp -o bin/conspiracy

directories:
	mkdir -p bin

clean:
	rm -rf bin

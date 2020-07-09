.PHONY: clean directories

all: directories bin/decoder

bin/decoder: decoder.cpp
	g++ -std=c++11 decoder.cpp -o bin/decoder

directories:
	mkdir -p bin

clean:
	rm -rf bin

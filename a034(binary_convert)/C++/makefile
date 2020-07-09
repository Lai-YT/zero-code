.PHONY: clean directories

all: directories bin/binary_convert

bin/binary_convert: binary_convert.cpp
	g++ -std=c++11 binary_convert.cpp -o bin/binary_convert

directories:
	mkdir -p bin

clean:
	rm -rf bin

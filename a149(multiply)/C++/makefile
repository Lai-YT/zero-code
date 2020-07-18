.PHONY: clean directories

all: directories bin/multiply

bin/multiply: multiply.cpp
	g++ -std=c++11 multiply.cpp -o bin/multiply

directories:
	mkdir -p bin

clean:
	rm -rf bin

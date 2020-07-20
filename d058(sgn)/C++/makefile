.PHONY: clean directories

all: directories bin/sgn

bin/sgn: sgn.cpp
	g++ -std=c++11 sgn.cpp -o bin/sgn

directories:
	mkdir -p bin

clean:
	rm -rf bin

.PHONY: clean

all: directories bin/slime

bin/slime: slime.cpp
	g++ -std=c++11 slime.cpp -o bin/slime

directories:
	mkdir -p bin

clean:
	rm -rf bin

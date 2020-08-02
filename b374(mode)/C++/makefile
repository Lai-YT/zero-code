.PHONY: clean directories

all: directories bin/mode

bin/mode: mode.cpp
	g++ -std=c++11 mode.cpp -o bin/mode

directories:
	mkdir -p bin

clean:
	rm -rf bin

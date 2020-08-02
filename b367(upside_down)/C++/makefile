.PHONY: clean directories

all: directories bin/upside_down

bin/upside_down: upside_down.cpp
	g++ -std=c++11 upside_down.cpp -o bin/upside_down

directories:
	mkdir -p bin

clean:
	rm -rf bin

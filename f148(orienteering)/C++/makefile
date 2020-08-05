.PHONY: clean directories

all: directories bin/orienteering

bin/orienteering: orienteering.cpp
	g++ -std=c++11 orienteering.cpp -o bin/orienteering

directories:
	mkdir -p bin

clean:
	rm -rf bin

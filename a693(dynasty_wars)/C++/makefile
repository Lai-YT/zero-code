.PHONY: clean directories

all: directories bin/dynasty_wars

bin/dynasty_wars: dynasty_wars.cpp
	g++ -std=c++11 dynasty_wars.cpp -o bin/dynasty_wars

directories:
	mkdir -p bin

clean:
	rm -rf bin

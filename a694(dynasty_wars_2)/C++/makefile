.PHONY: clean directories

all: directories bin/dynasty_wars_2

bin/dynasty_wars_2: dynasty_wars_2.cpp
	g++ -std=c++11 dynasty_wars_2.cpp -o bin/dynasty_wars_2

directories:
	mkdir -p bin

clean:
	rm -rf bin

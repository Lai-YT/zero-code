.PHONY: clean directories

all: directories bin/dynasty_wars_2

bin/array_applicadynasty_wars_2tion: dynasty_wars_2.cpp
	g++ -std=c++11 dynasty_wars_2.cpp -o bin/dynasty_wars_2

directories:
	mkdir -p bin

clean:
	rm -rf bin

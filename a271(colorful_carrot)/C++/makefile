.PHONY: clean directories

all: directories bin/colorful_carrot

bin/colorful_carrot: colorful_carrot.cpp
	g++ -std=c++11 colorful_carrot.cpp -o bin/colorful_carrot

directories:
	mkdir -p bin

clean:
	rm -rf bin

.PHONY: clean directories

all: directories bin/number_reverse

bin/number_reverse: number_reverse.cpp
	g++ -std=c++11 number_reverse.cpp -o bin/number_reverse

directories:
	mkdir -p bin

clean:
	rm -rf bin

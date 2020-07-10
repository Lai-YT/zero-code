.PHONY: clean directories

all: directories bin/mod3

bin/mod3: mod3.cpp
	g++ -std=c++11 mod3.cpp -o bin/mod3

directories:
	mkdir -p bin

clean:
	rm -rf bin

.PHONY: clean directories

all: directories bin/love_counting

bin/love_counting: love_counting.cpp
	g++ -std=c++11 love_counting.cpp -o bin/love_counting

directories:
	mkdir -p bin

clean:
	rm -rf bin

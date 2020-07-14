.PHONY: clean directories

all: directories bin/love_sorting

bin/love_sorting: love_sorting.cpp
	g++ -std=c++11 love_sorting.cpp -o bin/love_sorting

directories:
	mkdir -p bin

clean:
	rm -rf bin

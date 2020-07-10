.PHONY: clean directories

all: directories bin/lottery

bin/lottery: lottery.cpp
	g++ -std=c++11 lottery.cpp -o bin/lottery

directories:
	mkdir -p bin

clean:
	rm -rf bin

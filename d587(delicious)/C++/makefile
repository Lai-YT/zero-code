.PHONY: clean directories

all: directories bin/delicious

bin/delicious: delicious.cpp
	g++ -std=c++11 delicious.cpp -o bin/delicious

directories:
	mkdir -p bin

clean:
	rm -rf bin

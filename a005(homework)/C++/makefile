.PHONY: clean directories

all: directories bin/homework

bin/homework: homework.cpp
	g++ -std=c++11 homework.cpp -o bin/homework

directories:
	mkdir -p bin

clean:
	rm -rf bin

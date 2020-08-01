.PHONY: clean directories

all: directories bin/great_depression

bin/great_depression: great_depression.cpp
	g++ -std=c++11 great_depression.cpp -o bin/great_depression

directories:
	mkdir -p bin

clean:
	rm -rf bin

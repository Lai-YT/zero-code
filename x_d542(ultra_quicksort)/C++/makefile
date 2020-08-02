.PHONY: clean directories

all: directories bin/ultra_quicksort

bin/ultra_quicksort: ultra_quicksort.cpp
	g++ -std=c++11 ultra_quicksort.cpp -o bin/ultra_quicksort

directories:
	mkdir -p bin

clean:
	rm -rf bin

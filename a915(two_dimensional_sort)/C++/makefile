.PHONY: clean directories

all: directories bin/two_dimensional_sort

bin/two_dimensional_sort: two_dimensional_sort.cpp
	g++ -std=c++11 two_dimensional_sort.cpp -o bin/two_dimensional_sort

directories:
	mkdir -p bin

clean:
	rm -rf bin

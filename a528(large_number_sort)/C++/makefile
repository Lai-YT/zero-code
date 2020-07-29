.PHONY: clean directories

all: directories bin/large_number_sort

bin/large_number_sort: large_number_sort.cpp
	g++ -std=c++11 large_number_sort.cpp -o bin/large_number_sort

directories:
	mkdir -p bin

clean:
	rm -rf bin

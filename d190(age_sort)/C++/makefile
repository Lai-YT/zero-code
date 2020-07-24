.PHONY: clean directories

all: directories bin/age_sort

bin/age_sort: age_sort.cpp
	g++ -std=c++11 age_sort.cpp -o bin/age_sort

directories:
	mkdir -p bin

clean:
	rm -rf bin

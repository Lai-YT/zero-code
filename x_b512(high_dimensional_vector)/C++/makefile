.PHONY: clean directories

all: directories bin/high_dimensional_vector

bin/high_dimensional_vector: high_dimensional_vector.cpp
	g++ -std=c++11 high_dimensional_vector.cpp -o bin/high_dimensional_vector

directories:
	mkdir -p bin

clean:
	rm -rf bin

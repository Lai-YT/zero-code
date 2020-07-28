.PHONY: clean directories

all: directories bin/spiral_matrix

bin/spiral_matrix: spiral_matrix.cpp
	g++ -std=c++11 spiral_matrix.cpp -o bin/spiral_matrix

directories:
	mkdir -p bin

clean:
	rm -rf bin

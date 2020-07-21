.PHONY: clean directories

all: directories bin/io_optimization

bin/io_optimization: io_optimization.cpp
	g++ -std=c++11 io_optimization.cpp -o bin/io_optimization

directories:
	mkdir -p bin

clean:
	rm -rf bin

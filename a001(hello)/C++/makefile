.PHONY: clean directories

all: directories bin/hello

bin/hello: hello.cpp
	g++ -std=c++11 hello.cpp -o bin/hello

directories:
	mkdir -p bin

clean:
	rm -rf bin

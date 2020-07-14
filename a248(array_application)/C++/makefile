.PHONY: clean directories

all: directories bin/array_application

bin/array_application: array_application.cpp
	g++ -std=c++11 array_application.cpp -o bin/array_application

directories:
	mkdir -p bin

clean:
	rm -rf bin

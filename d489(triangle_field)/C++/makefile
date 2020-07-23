.PHONY: clean directories

all: directories bin/triangle_field

bin/triangle_field: triangle_field.cpp
	g++ -std=c++11 triangle_field.cpp -o bin/triangle_field

directories:
	mkdir -p bin

clean:
	rm -rf bin

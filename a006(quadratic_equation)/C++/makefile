.PHONY: clean directories

all: directories bin/quadratic_equation

bin/quadratic_equation: quadratic_equation.cpp
	g++ -std=c++11 quadratic_equation.cpp -o bin/quadratic_equation

directories:
	mkdir -p bin

clean:
	rm -rf bin

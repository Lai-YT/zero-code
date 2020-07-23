.PHONY: directories clean

all: directories bin/two_unknowns_linear_equation

bin/two_unknowns_linear_equation: two_unknowns_linear_equation.cpp
	g++ -std=c++11 two_unknowns_linear_equation.cpp -o bin/two_unknowns_linear_equation

directories:
	mkdir -p bin

clean:
	rm -rf bin

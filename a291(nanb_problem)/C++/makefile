.PHONY: clean directories

all: directories bin/nanb_problem

bin/nanb_problem: nanb_problem.cpp
	g++ -std=c++11 nanb_problem.cpp -o bin/nanb_problem

directories:
	mkdir -p bin

clean:
	rm -rf bin

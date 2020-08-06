.PHONY: directories clean

all: directories bin/computer_scoring

bin/computer_scoring: computer_scoring.cpp
	g++ -std=c++11 computer_scoring.cpp -o bin/computer_scoring

directories:
	mkdir -p bin

clean:
	rm -rf bin

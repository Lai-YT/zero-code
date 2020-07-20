.PHONY: clean directories

all: directories bin/computer_classroom

bin/computer_classroom: computer_classroom.cpp
	g++ -std=c++11 computer_classroom.cpp -o bin/computer_classroom

directories:
	mkdir -p bin

clean:
	rm -rf bin

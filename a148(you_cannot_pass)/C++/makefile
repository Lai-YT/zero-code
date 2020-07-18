.PHONY: clean directories

all: directories bin/you_cannot_pass

bin/you_cannot_pass: you_cannot_pass.cpp
	g++ -std=c++11 you_cannot_pass.cpp -o bin/you_cannot_pass

directories:
	mkdir -p bin

clean:
	rm -rf bin

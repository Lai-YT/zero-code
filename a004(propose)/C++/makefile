.PHONY: clean directories

all: directories bin/propose

bin/propose: propose.cpp
	g++ -std=c++11 propose.cpp -o bin/propose

directories:
	mkdir -p bin

clean:
	rm -rf bin

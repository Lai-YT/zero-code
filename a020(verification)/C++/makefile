.PHONY: clean directories

all: directories bin/verification

bin/verification: verification.cpp
	g++ -std=c++11 verification.cpp -o bin/verification

directories:
	mkdir -p bin

clean:
	rm -rf bin

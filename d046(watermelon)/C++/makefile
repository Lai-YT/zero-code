.PHONY: directories clean

all: directories bin/watermelon

bin/watermelon: watermelon.cpp
	g++ -std=c++11 watermelon.cpp -o bin/watermelon

directories:
	mkdir -p bin

clean:
	rm -rf bin

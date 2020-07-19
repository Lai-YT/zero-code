.PHONY: clean directories

all: directories bin/break_time

bin/break_time: break_time.cpp
	g++ -std=c++11 break_time.cpp -o bin/break_time

directories:
	mkdir -p bin

clean:
	rm -rf bin

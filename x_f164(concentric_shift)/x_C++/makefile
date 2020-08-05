.PHONY: clean directories

all: directories bin/concentric_shift

bin/concentric_shift: concentric_shift.cpp
	g++ -std=c++11 concentric_shift.cpp -o bin/concentric_shift

directories:
	mkdir -p bin

clean:
	rm -rf bin

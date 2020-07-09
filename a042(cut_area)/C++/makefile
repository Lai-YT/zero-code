.PHONY: clean directories

all: directories bin/cut_area

bin/cut_area: cut_area.cpp
	g++ -std=c++11 cut_area.cpp -o bin/cut_area

directories:
	mkdir -p bin

clean:
	rm -rf bin

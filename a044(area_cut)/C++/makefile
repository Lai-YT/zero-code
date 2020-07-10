.PHONY: clean directories

all: directories bin/area_cut

bin/area_cut: area_cut.cpp
	g++ -std=c++11 area_cut.cpp -o bin/area_cut

directories:
	mkdir -p bin

clean:
	rm -rf bin

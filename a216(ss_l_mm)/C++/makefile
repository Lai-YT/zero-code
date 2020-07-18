.PHONY: clean directories

all: directories bin/ss_l_mm

bin/ss_l_mm: ss_l_mm.cpp
	g++ -std=c++11 ss_l_mm.cpp -o bin/ss_l_mm

directories:
	mkdir -p bin

clean:
	rm -rf bin

.PHONY: directories clean

all: directories bin/print_it_all

bin/print_it_all: print_it_all.cpp
	g++ -std=c++11 print_it_all.cpp -o bin/print_it_all

directories:
	mkdir -p bin

clean:
	rm -rf bin

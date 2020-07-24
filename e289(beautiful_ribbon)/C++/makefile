.PHONY: clean directories

all: directories bin/beautiful_ribbon

bin/beautiful_ribbon: beautiful_ribbon.cpp
	g++ -std=c++11 beautiful_ribbon.cpp -o bin/beautiful_ribbon

directories:
	mkdir -p bin

clean:
	rm -rf bin

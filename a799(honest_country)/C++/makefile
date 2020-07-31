.PHONY: clean directories

all: directories bin/honest_country

bin/honest_country: honest_country.cpp
	g++ -std=c++11 honest_country.cpp -o bin/honest_country

directories:
	mkdir -p bin

clean:
	rm -rf bin

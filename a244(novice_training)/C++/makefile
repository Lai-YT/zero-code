.PHONY: clean directories

all: directories bin/novice_training

bin/novice_training: novice_training.cpp
	g++ -std=c++11 novice_training.cpp -o bin/novice_training

directories:
	mkdir -p bin

clean:
	rm -rf bin

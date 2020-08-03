.PHONY: clean directories

all: directories bin/convolutional_neural_networks

bin/convolutional_neural_networks: convolutional_neural_networks.cpp
	g++ -std=c++11 convolutional_neural_networks.cpp -o bin/convolutional_neural_networks

directories:
	mkdir -p bin

clean:
	rm -rf bin

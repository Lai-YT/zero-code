.PHONY: clean directories

all: directories bin/order_computation_process

bin/order_computation_process: order_computation_process.cpp
	g++ -std=c++11 order_computation_process.cpp -o bin/order_computation_process

directories:
	mkdir -p bin

clean:
	rm -rf bin

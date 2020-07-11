.PHONY: clean directories

all: directories bin/order_computation_process

bin/order_computation_process: order_computation_process.c
	gcc -std=c11 order_computation_process.c -o bin/order_computation_process

directories:
	mkdir -p bin

clean:
	rm -rf bin

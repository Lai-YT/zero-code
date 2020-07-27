.PHONY: clean directories

all: directories bin/bitwise_operation_carry

bin/bitwise_operation_carry: bitwise_operation_carry.cpp
	g++ -std=c++11 bitwise_operation_carry.cpp -o bin/bitwise_operation_carry

directories:
	mkdir -p bin

clean:
	rm -rf bin

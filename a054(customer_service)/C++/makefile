.PHONY: clean directories

all: directories bin/customer_service

bin/customer_service: customer_service.cpp
	g++ -std=c++11 customer_service.cpp -o bin/customer_service

directories:
	mkdir -p bin

clean:
	rm -rf bin

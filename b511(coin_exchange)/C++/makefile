.PHONY: clean directories

all: directories bin/exchange_coin

bin/exchange_coin: exchange_coin.cpp
	g++ -std=c++11 exchange_coin.cpp -o bin/exchange_coin

directories:
	mkdir -p bin

clean:
	rm -rf bin

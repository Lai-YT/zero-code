.PHONY: clean directories

all: directories bin/card_password

bin/card_password: card_password.cpp
	g++ -std=c++11 card_password.cpp -o bin/card_password

directories:
	mkdir -p bin

clean:
	rm -rf bin

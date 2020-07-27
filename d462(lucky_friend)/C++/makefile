.PHONY: clean directories

all: directories bin/lucky_friend

bin/lucky_friend: lucky_friend.cpp
	g++ -std=c++11 lucky_friend.cpp -o bin/lucky_friend

directories:
	mkdir -p bin

clean:
	rm -rf bin

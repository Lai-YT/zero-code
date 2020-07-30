.PHONY: clean directories

all: directories bin/investment_expert

bin/investment_expert: investment_expert.cpp
	g++ -std=c++11 investment_expert.cpp -o bin/investment_expert

directories:
	mkdir -p bin

clean:
	rm -rf bin

.PHONY: directories clean

all: directories bin/computer_scoring

bin/computer_scoring: computer_scoring.c
	gcc -std=c11 computer_scoring.c -o bin/computer_scoring

directories:
	mkdir -p bin

clean:
	rm -rf bin

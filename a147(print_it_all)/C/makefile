.PHONY: directories clean

all: directories bin/print_it_all

bin/print_it_all: print_it_all.c
	gcc -std=c11 print_it_all.c -o bin/print_it_all

directories:
	mkdir -p bin

clean:
	rm -rf bin

.PHONY: clean directories

all: directories bin/array_application

bin/array_application: array_application.c
	gcc -std=c11 array_application.c -o bin/array_application

directories:
	mkdir -p bin

clean:
	rm -rf bin

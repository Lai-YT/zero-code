.PHONY: clean directories

all: directories bin/music_cut

bin/music_cut: music_cut.cpp
	g++ -std=c++11 music_cut.cpp -o bin/music_cut

directories:
	mkdir -p bin

clean:
	rm -rf bin

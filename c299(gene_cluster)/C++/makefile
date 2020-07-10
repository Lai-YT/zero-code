.PHONY: clean directories

all: directories bin/gene_cluster

bin/gene_cluster: gene_cluster.cpp
	g++ -std=c++11 gene_cluster.cpp -o bin/gene_cluster

directories:
	mkdir -p bin

clean:
	rm -rf bin

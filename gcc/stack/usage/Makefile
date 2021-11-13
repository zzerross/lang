setup:
	wget https://dlbeer.co.nz/downloads/avstack.pl

all:
	gcc -fstack-usage main.c -c -g -o main.o
	gcc main.o
	./avstack.pl main.o

clean:
	rm -rf main.o a.out

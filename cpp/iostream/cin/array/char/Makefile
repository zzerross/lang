all:
	g++ main.cpp
	./a.out < in.txt 2>&1 | tee main.txt
	g++ -std=c++2a main.cpp
	./a.out < in.txt 2>&1 | tee main.c++2a.txt

clean:
	rm -rf a.out

all: main.cpp libtest.a
	g++ $< -L. -l test

libtest.a: test.cpp
	g++ -fvisibility=hidden -c $<
	ar cr libtest.a test.o

clean:
	rm -rf libtest.a test.o a.out

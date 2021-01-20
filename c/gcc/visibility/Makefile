all: main.c libtest.a
	gcc $< -L. -l test

libtest.a: test.c
	gcc -fvisibility=hidden -c $<
	ar cr libtest.a test.o

clean:
	rm -rf libtest.a test.o a.out

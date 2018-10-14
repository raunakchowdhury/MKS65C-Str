all: mystr.o tester.o
	gcc tester.o

run:
	./a.out

mystr.o: mystr.c mystr.h
	gcc -c mystr.c

tester.o: tester.c
	gcc -c tester.c

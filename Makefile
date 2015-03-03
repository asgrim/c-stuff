CC=g++
CFLAGS=-c -Wall

all: bin

bin: test.o
	$(CC) test.o -o test

test.o: test.cpp
	$(CC) $(CFLAGS) test.cpp
	
clean:
	rm *.o test

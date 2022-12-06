CC=gcc
AR=ar
FLAGS= -Wall -g

all: connections

connections: main.o my_mat.o
	$(CC) $(FLAGS) -o $@ $^

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c $<

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c $<

.PHONY: c clean all

c: clean

clean:
	rm -f *.o main
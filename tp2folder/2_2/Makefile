CC = gcc
FLAGS = -W -Wall -Werror

default: tp1

tp1: tp1_1.o tp1_2.o tp1_3.o
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) $(FLAGS) -c $^

clean:
	rm -f *.o
	rm -f tp1

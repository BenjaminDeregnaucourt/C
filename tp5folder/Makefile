
CC = gcc
W = -W -Wall -Werror
STD = -std=c99
E = tp4

tp5 : main.o traiter.o 
	$(CC) -o $@ $^

%.o : %.c
	$(CC) $(W) $(STD) -c $^

clean:
	rm -rf *.o


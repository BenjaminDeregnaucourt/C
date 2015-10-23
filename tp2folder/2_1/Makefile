.PHONY: clean

.SUFFIXES:
CC=gcc
W =  -Wall -W -Werror

clean:
	rm -f *.o

tp2_1 : q1.o q2.o q3.o q4.o
	$(CC) -o tp1 $(W) q1.o q2.o q3.o q4.o
	make clean


%.o : %.c
	$(CC) -c -o $@$^

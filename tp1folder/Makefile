.PHONY: clean

.SUFFIXES:
CC=gcc
W =  -Wall -W -Werror

clean:
	rm -f *.o

tp1 : tp1_1.o tp1_2.o tp1_3.o
	$(CC) -o tp1 $(W) tp1_1.o tp1_2.o tp1_3.o
	make clean

%.o : %.c
	$(CC) -c -o $@$^

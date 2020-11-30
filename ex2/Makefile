AR=ar
CC=gcc
O_MAIN=main.o
FLAGS= -Wall -g


all: libmyBank.a libmyBank.so progmaind progmains

progmains: $(O_MAIN) libmyBank.a
	$(CC) $(FLAGS) -o progmains $(O_MAIN) libmyBank.a

progmaind: $(O_MAIN)
	$(CC) $(FLAGS) -o progmaind $(O_MAIN) ./libmyBank.so

libmyBank.a: myBank.o
	$(AR) -rcs libmyBank.a myBank.o

libmyBank.so: myBank.o
	$(CC) -shared -o libmyBank.so myBank.o
 
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c

main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c


PHONY: clean all

clean:
	rm -f *.o *.a *.so *.exe
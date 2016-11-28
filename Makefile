#Rule 1
mystring.o : udll.c udll.h
        gcc -Wall -c mystring.c

#Rule 2
main.o: main.c
        gcc -Wall -c main.c

#Rule 3
mystring: main.o udll.o
        gcc -Wall -o universalDoubleLinkedList main.o mystring.o

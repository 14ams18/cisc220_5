#Rule 1
udll.o : udll.c udll.h
        gcc -Wall -c udll.c

#Rule 2
main.o: main.c
        gcc -Wall -c main.c

#Rule 3
universalDoubleLinkedList: main.o udll.o
        gcc -Wall -o universalDoubleLinkedList main.o udll.o

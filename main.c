#include<stdio.h>
#include<stdlib.h>
#include"udll.h"

int main() {
        union Data first=1;
        struct Node *head = NULL;
        struct Node *last = NULL;
        insert(0, first, head, last);
        get(0, head, last);
        int len;
        len = length(head);
        printf("%d", len);
        Remove(0, head, last);
        get(0, head, last);
        return 0;

}


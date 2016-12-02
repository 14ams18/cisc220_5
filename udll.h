#ifndef UDLL_H
#define UDLL_H

        union Data;

        struct Node;

        void insert(int index, union Data data, struct Node *head, struct Node *last);

        void Remove(int index, struct Node *head, struct Node *last);

        union Data get(int index, struct Node *head, struct Node *last);

        int length (struct Node *head);

#endif

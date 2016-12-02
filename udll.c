#include<stdlib.h>
#include<stdio.h>

union Data{
        int data;
        int *data;
        float data;
        float *data;
        char data;
        char *data;
};

struct Node{
        int length;
        struct Node *previous;
        union Data data;
        struct Node *next;
};

void insert(int index, union Data data, struct Node *head, struct Node *last){
        if(!head){ //no linked list, creates node/reassigns 'head' and 'last'
                struct Node newNode = {1, NULL, data, NULL};
                head = &newNode;
                last = &newNode;
                head->length++;
        }
        else if(index == 0) { //inserting at front of the list
                int len = head->length;
                struct Node *ptr = head;
                struct Node newNode = {head->length, NULL, data, ptr};
                ptr->previous = &newNode;
                head = &newNode;
                head->length = len + 1;
        }
        else if(index == head->length) { //inserting at end of the list
                struct Node newNode = {0, last, data, NULL};
                last->next = &newNode;
                last = &newNode;
                head->length++;
        }
        else if(index <= head->length) { //inserting in middle of list, lest loops, need to access from tail too
                struct Node *ptr;
                if(index <= head->length/2){
                        ptr = head;
                }
                else {
                        ptr = last;
                }
                for(int i=0; i< (index-1); i++) {
                                ptr=ptr->next;
                }
                struct Node *after = ptr->next->next;
                struct Node newNode = {0, ptr, data, after};
                ptr->next = &newNode;
                after->previous = &newNode;
        }
        else { //no valid index provided
                printf("Invalid index value");
        }
        head->length++;
}

void Remove(int index, struct Node *head, struct Node *last){
        if(index == 0) { //removing head of list
                head->next->length = head->length;
                head = head->next;
                head->previous = NULL;
        }
        else if(index == head->length) { //removing the last Node
                last = last->previous;
                last->next = NULL;
        }
        else if(index <= head->length) { //removing a Node in the middle
                struct Node *ptr;
                if(index <= head->length/2){
                        ptr = head;
                }
                else {
                        ptr = last;
                }
                for(int i=0; i< (index-1); i++) {
                        ptr=ptr->next;
                }
                struct Node *after = ptr->next->next;
                ptr->next = after;
                after->previous = ptr;
        }
        else { //no valid index provided
                printf("Invalid index value");
        }
        head->length--;
}

union Data get(int index, struct Node *head, struct Node *last){
        struct Node *ptr;
        if (index <= head->length/2) {
        for(int i=0; i< index; i++) {
                        ptr=ptr->next;
                }
                return ptr->data;
        }
        else if (index > head->length/2) {
                for(int i=0; i< index; i++) {
                        ptr=ptr->previous;
                }
                return ptr->data;
        }
        else { //no valid index provided
                printf("Invalid index value");
                exit(-1);
        }
}

int length (struct Node *head){
        if(head->length) {
                return head->length;
        }
        return 0;


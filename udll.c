union Data {
        // look at notes
};

typedef struct{
        int length;
        *Node previous;
        Data data;
        *Node next;
        //type for address?
        //where instantiate? as a global var in here?
} Node;

void insert(int index, union Data data){
        if(*head.data == NULL){ //no linked list, creates node/reassigns 'head'
                Node newNode = {1, NULL, data, NULL};
                *head = &newNode;
        }
        else if( ) { //inserting new Node before current head
                
        }
        else if( (index-1) <= head.length) { //inserting in middle of list
                Node *ptr = head;
                for(int i=0; i< (index-1); i++) {
                        ptr=ptr->next;
                }
                Node *after = ptr->next->next;
                Node newNode = {NULL, ptr, data, after};
                ptr.next = newNode;
                after.previous = newNode;
                if(index == head.length) {
                                
                }
                head.length++;
        }
        else { //no valid index provided
                printf("Invalid index value");
        }
                
        //include length incrementer
        //create list if none
}

void remove(int index){
        //decrement length
}

union Data get(int index){
        //minimum num of iterations
        //if to start at head or tail: if index < length-1-index
}

int length(){
        // global var declared in here?
}

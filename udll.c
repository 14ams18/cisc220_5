union Data {
        // look at notes
};

struct Node {
        //type for address?
        //where instantiate? as a global var in here?
};

void insert(int index, union Data data){
        if( (index-1) <= head.length) {
                Data *ptr = head;
                for(int i=0; i< (index-1); i++) {
                        ptr=ptr->next;
                }
                Data *after = ptr->next->next;
                Data newNode = {ptr, data, after}; //also a NULL for length
                ptr.next = newNode;
                after.previous = newNode;
                head.length++;
        }
        else {
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

#include <iostream>

struct node{

int data;
node* next;
};

class LinkedList{

node*head;
int counter;
public:

LinkedList(){
  counter = 0;
  head = NULL;
}

const void add(node x){
if(head == NULL){
  head = x;
  counter+=1;
}else{

x.next = head;
head = x;
counter+=1;
}
}

};
int main() {

}

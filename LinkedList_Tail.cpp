#include <iostream>
using namespace std;

struct node{

int data;
node* next;

};

class LinkedList{

node*head;
node*tail;
int counter;
public:
LinkedList(){
head = NULL;
tail = NULL;
counter = 0;
}

const void add(int n){
node* tmp;
tmp->data= n;
tmp->next = NULL;

if(head == NULL && tail == NULL && counter == 0){
head = tmp;
tail = tmp;
counter+=1;
} else{
  tail->next = tmp;
  tail = tail->next;
  counter+=1;
}

  
}


};

int main() {
LinkedList a;

}

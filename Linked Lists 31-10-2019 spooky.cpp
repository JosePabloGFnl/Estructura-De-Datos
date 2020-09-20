#include <iostream>

using namespace std;

struct node{
int data;
struct node * next;
};

typedef struct node * NODEPTR;

NODEPTR createNode(){
NODEPTR p = (NODEPTR) malloc (sizeof(struct node));
return(p);
}

void traversal(NODEPTR header){
NODEPTR p = header;
while(p!=NULL){
cout<<"Value: "<<p->data<<endl;
p=p->next;
}
}

void reverseTraversal(NODEPTR header){
if(header==NULL)
return;
else{
reverseTraversal(header->next);
cout<<"Value: "<<header->data<<endl;
}
}

void push(NODEPTR * header, int x){
NODEPTR newElem = createNode();
newElem -> data = x;
newElem -> next = *header;
*header = newElem;
}

int pop(NODEPTR * header){
NODEPTR p = *header;
int x = -1;
if(p!=NULL){
x = p->data;
*header = p->next;
free(p);
}
return x;
}

int main()
{
cout<<"Hello World"<<endl;
NODEPTR header = NULL;
push(&header,1);
push(&header,2);
push(&header,3);
push(&header,4);
pop(&header);
reverseTraversal(header);
cout<<"Bye..."<<endl;
return 0;
}

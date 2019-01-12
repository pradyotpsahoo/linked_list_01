#include <iostream>
using namespace std;

class node{
public:

//data
int data;

//pointer to the next node
node*next;//like ptr to int=int *ptr

//constructor that makes pointer to null
node(){
      next=NULL;
      }
};

class linkedlist{
//head +circle inside linked each other
//head
//circle which is node type ptr
public:
node*head;
node*tail;

//construct
linkedlist(){
head=NULL;
tail=NULL;
}
//circle inside link with each other
//rules how the circle is linked


//INSERT
void insert (int value){
//if the first node is added
node * temp=new node;
//insert value in the node
temp->data=value;
//first node only present
if(head==NULL)
    head=temp;
else{
     //for the last addition
    tail->next=temp;
}
tail=temp;
}
void  insertAt(int pos ,int value){
//reach the value before the pos
node*current=head;
int i=1;
while(i<pos-1){
    i++;
    current=current->next;
}
//create a node
node*temp=new node;
temp->data=value;
//moving ptr like magic!
temp->next=current->next;
current->next=temp;
}


//DELETE the last element
void del(){
//store the tail in temp
node*temp=tail;
//before tail has to point to null
node*current=head;
while(current->next!=tail){
    current=current->next;
}
current->next=NULL;
//update tail
tail=current;
//delete the temp
}
//deleteAt
void deleteAt(int pos){
//reach the place before the pos
node*current=head;
int i=1;
while(i<pos-1){
      i++;
      current=current->next;
      }
//delete the node
}


//countItems
int countItems(){
node*current=head;
int i=0;
while(current!=NULL){
    current=current->next;
    i++;
}
cout<<"THE NUMBER OF ITEMS IN LINKED LIST IS :"<<i<<endl;

}


//DISPLAY
void display(){
node*current=head;
while(current!=NULL){
    cout<<current->data<<"->";
    current=current->next;
}
 cout<<endl;
/*cout<< head->data<<"->"<<endl;
temp = head->next;
cout<< temp->data<<"->"<<endl;
temp = temp->next;
cout<< temp->next<<"->"<<endl;*/
}

};


int main()
{
linkedlist l1;
l1.insert(1);
l1.insert(2);
l1.insert(3);
l1.insert(4);
l1.insert(17);
l1.display();
l1.countItems();
l1.insertAt(3,9);
l1.display();
l1.countItems();
l1.del();
l1.display();
l1.countItems();
return 0;
}

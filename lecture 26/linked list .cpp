#include <iostream>
#include<vector>
using namespace std;


///////////////////////////CLASS NODE///////////////////////////////////////

class node {
public:

    //int * n gives the bucket address only data can be pointed which doesnot point to linked lis
	int data;//int* address
	node* next;//address of full class
	node (int d) {
		data = d;
		next = NULL;
	}

};
//self refrestional class is the pointer of tht one class .
//node can point towards node itself
///////////////////////////CLASS NODE///////////////////////////////////////

void InsertAtBegin(node * &head, node* &tail, int data) {
	if (!head) {
		node*n = new node(data);
		head = tail = n;
	}
	else {
		node*n = new node(data);
		n->next = head;
		head = n;
	}
}

void InsertAtEnd(node * &head, node* &tail, int data) {
	if (!head) {
		node*n = new node(data);
		head = tail = n;
	}
	else {
		node*n = new node(data);
		tail->next = n;
		tail = n;
	}
}
int lengthll(node*head){
int cnt=0;
                                                                                                                          while(head!="NULL")
      {
      cnt++;
      head=head-->next;
      }
}
//insert at mid indexing is from 0. data to be positioned at 4.pos>=length ll;
// insertion at end to be used
void InsertInMiddle(node * &head, node* &tail, int pos, int data) {
	if (pos == 0) {
		InsertAtBegin(head, tail, data);
	}
	else if(pos>=lengthll(head)){
        InsertAtEnd(head,tail,data);
	}
	else {
		node*temp = head;
		for (int i = 1; i <= pos - 1; ++i)
		{
			temp = temp->next;
		}
		node*n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}


void PrintLL(node * head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << "NULL" << endl;
}
void deleteatbegin(node*&head,node*&tail){
if(head==NULL){
    return;
}
else if(head-->next==NULL){
        delete head;
        head=tail=NULL;

}
else{
    node*t=head;
    head=head->next;
    delete t;
}

}
void deleteatend(node*&head,node*&tail){
if(head==NULL){
    return;
}
else if(head-->next==NULL){
        delete tail;
        head=tail=NULL;

}
else{
    node*temp=head;
    while(temp->next!=tail){
        temp =temp->next;

    }
    delete tail;
    temp->next=NULL;
    tail=temp;

}
}


int main () {
	node *head, *tail;
	head = tail = NULL;



	InsertAtBegin(head, tail, 1);
	InsertAtBegin(head, tail, 2);
	InsertAtBegin(head, tail, 3);
	InsertAtBegin(head, tail, 4);
	InsertAtBegin(head, tail, 5);
	InsertAtEnd(head, tail, 8);
	InsertAtEnd(head, tail, 0);
	InsertAtEnd(head, tail, 6);
	InsertInMiddle(head, tail, 3, 100);


	node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
        printll(head);
        insertatmid(head, tail,)


/// node n;
//
	// n.data = 1;
	// n.next = NULL;

	// node n1;
	// n1.data = 2;
	//linking of the lelements
	// n1.next = NULL;


	// n.next = &(n1);
	//printing the elements of node
    //method 1
	// cout << n.data << " ";
	// cout << (*(n.next)).data << endl;//address of second node by n.next=200. dereference operator can be used
	// (. )operator works on objects

	//method 2
    // instead of deference operator we can use arrow operator(-->)
    	// cout << n.data << " ";
	// cout << (n.next)->data << endl;
	return 0;

}

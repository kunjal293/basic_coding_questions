///circular linked list.cpp
// LinkedList.cpp
#include <iostream>
using namespace std;

//////////////////////// CLASS NODE ///////////////////////
class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};
//////////////////////// CLASS NODE ///////////////////////

void InsertAtBegin(node* &head, node* &tail, int data) {
	if (!head) { // Iska mtlb hai pehli node aa rhi hai toh head & tail both will update
		node* n = new node(data);
		head = tail = n;
	}
	else {
		node* n = new node(data);
		n -> next = head;
		head = n;
	}
}

void InsertAtEnd(node* &head, node* &tail, int data) {
	if (!head) {
		node* n = new node(data);
		head = tail = n;
	}
	else {
		node* n = new node(data);
		tail->next = n;
		tail = n;
	}
}

void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;

}
void breakcycle(node*fast,node*head)
{
    node*slow=head;
    node*prev=head;
    while(prev->next!=fast)
    {
        prev=prev->next;
    }
    while(fast !=slow)
    {
        prev=fast;
        fast=fast->next;
        slow=slow->next;
    }
    prev->next=NULL;
}
bool iscycle(node*head)
{

    node*slow,*fast;
    slow=fast=head;
    while(fast and fast->next)
    {
        fast=fast->next->next;
        slow=slow->next->next;
        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}
void  createcycle(node*head)
{
    node*temp=head;
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=head->next->next;


}

int main() {

	node* head, *tail;
    head = tail = NULL;


	InsertAtEnd(head, tail, 1);
	InsertAtEnd(head, tail, 14);
	InsertAtEnd(head, tail, 50);
	InsertAtEnd(head, tail, 19);
	InsertAtEnd(head, tail, 2);
//print the linked list
	printLL(head);
	// InsertAtMid(head, tail, 3, 100);
	// printLL(head);
	node* head1, *tail1;
	head1 = tail1 = NULL;
    cout<<"printing a linked list after function insert at end"<<endl;
	InsertAtEnd(head1, tail1, 2);
	InsertAtEnd(head1, tail1, 3);
	InsertAtEnd(head1, tail1, 6);
	InsertAtEnd(head1, tail1, 7);
	InsertAtEnd(head1, tail1, 11);

	printLL(head);
	createcycle(head);
	iscycle(head);
	//donot print the linked list
	//printLL(head)
	if(iscycle(head))
    {
        cout<<"it is a cycle"<<endl;
    }
    else{
        cout<<"it is not a cycle"<<endl;
    }


	return 0;
}


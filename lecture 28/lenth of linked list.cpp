#include<iostream>
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
///printing a linked list
void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;

}
///length of linked list
int lengthLL(node* head) {
	int cnt = 0;
	while (head != NULL) {
		cnt ++;
		head = head->next;
	}
	return cnt;
}
int main (){

	node* head, *tail;
	head = tail = NULL;
//inserting the elements in a linked list

	InsertAtEnd(head, tail, 1);
	InsertAtEnd(head, tail, 14);
	InsertAtEnd(head, tail, 50);
	InsertAtEnd(head, tail, 19);
	InsertAtEnd(head, tail, 2);
//print the linked list by printll function
	printLL(head);
	// InsertAtMid(head, tail, 3, 100);
	// printLL(head);
	node* head1, *tail1;
	head1 = tail1 = NULL;
	//insert the elements in the linked list byinsertatend function
	InsertAtEnd(head1, tail1, 2);
	InsertAtEnd(head1, tail1, 3);
	InsertAtEnd(head1, tail1, 6);
	InsertAtEnd(head1, tail1, 7);
	InsertAtEnd(head1, tail1, 11);

	printLL(head);
	cout << "Length of LL: " << lengthLL(head) << endl;
return 0;
}

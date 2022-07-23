///delete at end.cpp+delete from mid .cpp
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
int lengthLL(node* head) {
	int cnt = 0;
	while (head != NULL) {
		cnt ++;
		head = head->next;
	}
	return cnt;
}
void deleteAtBegin(node* &head, node* &tail) {
	if (head == NULL) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* t = head;
		head = head->next;
		delete t;
	}
}
void deleteAtEnd(node* &head, node* &tail) {
	if (head == NULL) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		while (temp->next != tail) {
			temp = temp->next;
		}

		delete tail;
		temp->next = NULL;
		tail = temp;
	}
}
void deleteAtMid(node* &head, node* &tail, int pos) {
	if (head == NULL) {
		return;
	}
	else if (lengthLL(head) < pos) {
		return;
	}
	else if (pos == lengthLL(head) - 1) {
		deleteAtEnd(head, tail);
	}
	else if (pos == 0) {
		deleteAtBegin(head, tail);
	}
	else {
		node* temp = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			temp = temp->next;
		}
		node* p = temp->next;
		temp->next = p->next;
		delete p;
	}
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
	cout<<"delete at end linked list"<<endl;
	 deleteAtEnd(head, tail);
	printLL(head);
	cout<<"linked list after deleting from mid"<<endl;
	deleteAtMid(head, tail, 2);
	printLL(head);
	cout<<"linked list after deleting it from begin "<<endl;
	deleteAtBegin(head,tail);
	printLL(head);
	return 0;
}

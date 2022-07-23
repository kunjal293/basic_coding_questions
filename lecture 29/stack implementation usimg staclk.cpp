///stack implementation using linked linked list.cpp

#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

class Stack {
public:
	node* head;
	Stack() {
		head = NULL;
	}

	void push(int d) {//push is used to insert the elements
		if (!head) {
			head = new node(d);
		}
		else {
			node* n = new node(d);
			n->next = head;
			head = n;
		}
	}

	void pop() {//pop is used to delete the element
		if (!head) {
			return;
		}
		else if (!head->next) {
			delete head;
			head = NULL;
		}
		else {
			node* temp = head;
			head = head->next;
			delete temp;
		}
	}

	bool empty() {///bool emplty means that head is null
		return head == NULL;
	}

	int top() {//top return the head value
		return head->data;
	}
};

int main() {

	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << '\n';


	return 0;
}








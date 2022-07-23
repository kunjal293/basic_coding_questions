#include<iostream>
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
void bubblesort(node*&head)
{
    int len =lengthLL(head);
    node*c,*p,*n;
    for(int i=0;i<len-1;++i)
    {
        c=head;
        p=NULL;
        while(c and c->next ){
            if(c->data>c->next->data)
            {
                //swapping hogi
                if(p==NULL)
                {
                    //head change hoga
                    n=c->next;
                    c->next=n->next;
                    n->next=c;
                    head=p=n;
                }
                else{
                    //head change nahi hoga
                     n=c->next;
                    c->next=n->next;
                    n->next=c;
                    p->next=n;
                    p=n;

                }
            }
            else{
                //swapping nahi hogi
                p=c;
                c=c->next;
            }

        }
    }
}

int main() {

	node* head, *tail;
	head = tail = NULL;

cout<<"printing a linked list after function insert at end"<<endl;
	InsertAtEnd(head, tail, 1);
	InsertAtEnd(head, tail, 14);
	InsertAtEnd(head, tail, 50);
	InsertAtEnd(head, tail, 19);
	InsertAtEnd(head, tail, 2);
	printLL(head);
	bubblesort(head);
    printLL(head);
	return 0;
}

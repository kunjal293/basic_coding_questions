// File - Queue.cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
	Queue<int> q;
	q.push('A');
	q.push('B');
	q.push('C');
	q.push('D');

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	} cout << '\n';


	return 0;
}




//set.cpp
//duplicate data is not alllowed,and data is sorted
/// set ke start pe jaana hai toh s.begin is used
//set works in log time
///if we want to search for the element so we need to pass the
//priority queue is not used becos it cannot be updated (duplicate data is allowed here
// Set.cpp
#include <iostream>
#include <set>
using namespace std;

int main() {

	set<int> s;
	// Iske andar duplicate data isn't allowed, and data is sorted
	s.insert(1);
	s.insert(1);
	s.insert(1);
	s.insert(1);
	s.insert(1);
	s.insert(2);
	s.insert(5);
	s.insert(8);
	s.insert(3);
	s.insert(4);
	s.insert(7);
	s.insert(6);

	while (!s.empty()) {
		auto address = s.begin();
		cout << *address << endl;
		s.erase(address);
	}


	return 0;
}

///set with pair

#include <iostream>
#include <set>
using namespace std;

int main() {

	set<pair<int, string> > s;
	s.insert({3, "Delhi"});
	s.insert({4, "Jaipur"});
	s.insert({5, "Pune"});
	s.insert({2, "Mumbai"});
	s.insert({1, "Banglore"});

	auto ans = s.find({3, "Delhi"});
	if (ans != s.end()) {
		// auto p = *ans;
		// cout << p.first << ", " << p.second << endl;
		cout << ans->first << ", " << ans->second << endl;
//2 nd way to write above to statements
//cout<<ans->first<<", "<<ans->second<<endl;
//set ke ndar ugradation ius not possible
//alternative : pehle purrane wale pair ko udda do
//then naye pair ko insert krdo
		s.erase(ans);
		s.insert({50, "Delhi"});
	}
	else {
		cout << "Not Found" << endl;
	}

	while (!s.empty()) {
		auto address = s.begin();
		auto p = *address;
		cout << p.first << ", " << p.second << endl;
		s.erase(address);
	}


	return 0;
}


// BalancedParantheses.cpp
#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(char *a) {//is balanced is a header file or we can make it again
	stack<char> s;

	for (int i = 0; a[i] != '\0'; ++i)
	{
		char ch = a[i];
		switch (ch) {
		case '{':
		case '[':
		case '(': s.push(ch);
			break;
		case '}':
			if (!s.empty() and s.top() == '{') {///stack empty nahi hona chahiye and stack ke top pe { hona chahiye
				s.pop();
			}
			else {
				return false;
			}
			break;
		case ']':///stack empty nahi hona chahiye and stack ke top pe [ hona chahiye
			if (!s.empty() and s.top() == '[') {
				s.pop();
			}
			else {
				return false;
			}
			break;
		case ')':///stack empty nahi hona chahiye and stack ke top pe ) hona chahiye
			if (!s.empty() and s.top() == '(') {
				s.pop();
			}
			else {
				return false;
			}
		}
	}

	if (s.empty() == true) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	char a[] = "{a+(b+c)*d+e*[k+m*(h+i)]}";///input

	if (isBalanced(a)) {
		cout << " it is Balanced " << endl;
	}
	else {
		cout << " it is not Balanced" << endl;
	}

	return 0;
}




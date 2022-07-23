// CheckPallindrome.cpp
// to check pallindrome we first create a char array then we can check if starting and elements are equal
//so we we can say that n is the totsal the no of elements so i should be equal to n-1
// C++ program for the above approach
#include <iostream>
using namespace std;

// Function to check whether
// the string is palindrome
string isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;

    // Reverse the string P
    reverse(P.begin(), P.end());

    // If S is equal to P
    if (S == P) {
        // Return "Yes"
        return "Yes";
    }
    // Otherwise
    else {
        // return "No"
        return "No";
    }
}


int main()
{
    string S = "ABCDCBA";
    cout << isPalindrome(S);

    return 0;
}






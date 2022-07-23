#include<iostream>
#include<list>
using namespace std;
int main ()
{
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.sort();
    for(auto it=l.begin(); it!=l.end();it++)
    {
        cout<<*it<<"-->";
                      }
    cout<<"NULL\n";
    return 0;
}


#include<iostream>
#include <vector>
#include<algorithm >
using namespace std;
int main ()
{
    vector<int >v;
    for(int i=1;i<=5;i++)
    {
        //cout<<"size after inserting:"<<i<" "<<v.size();
        //cout<<"capacity after inserting: "<< i <<" " <<v.capacity()<<endl<<endl;
        v.push_back(5-i);

    }

    //v.push_back(1);
    //v.push_back(2);
    //v.push_back(3);
    //v.push_back(4);
   // v.push_back(5);
   for(int i=0;i<v.size();++i)
   sort(v.begin,v.end())
    for(int i=0;i<v.size();++i)
    {
        cout<<v[i]<<" ";

    }
    cout<<'\n';
    cout<<
    return 0;
}
//v.rbegin and v.rend is used to sort the elements in reverse order
//header file vector is used to add vectors
//header file#include <algorithm >is used to sort the elements


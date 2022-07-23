#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class campare{
public:
    bool operator()(int a,int b)///this is functor camparison is told by functor
    {
        return a<b;
    }
};
int main()
{
    ///greater <int > is a funvction to make min
   // priority_queue<int,vector<int >,greater<int>>h;//maxheap
    priority_queue<int,vector<int >,campare>h;//this is a campare class
    h.push(1);
    h.push(2);
    h.push(17);
    h.push(0);
    h.push(5);

    while(!h.empty())
    {
        cout<<h.top()<<" ";
        h.pop();

    }
    cout<<endl;
return 0;
}

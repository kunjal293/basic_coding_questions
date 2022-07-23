#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void printheap( priority_queue<int,vector<int >,greater<int>>h)
{

 while(!h.empty())
    {
        cout<<h.top()<<" ";
        h.pop();

    }
}
int main ()
{
    priority_queue<int,vector<int >,greater<int>>h;
    int k=3;
    int data;
    int cs=0;
    while(1)
    {
        cin>>data;
        if(data==-1)
        {
            //print the heap
            printheap(h);
        }
         else if(cs<k)
        {
            h.push(data);
            cs++;
        }
        else
        {
            if(data>h.top())
            {
                h.pop();
                h.push(data);
            }
        }
    }
    return 0;
}

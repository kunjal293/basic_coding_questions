#include<iostream>
#include<list>
using namespace std;
class graph{
public:
    list<int>*l;
    int n;
    graph (int s){
        l=new list<int>[s];
        n=s;
        }
void add_edge(int u,int v,bool bidir=true)
{
    l[u].push_back(v);
    if(bidir)
    {
        l[v].push_back(u);
    }
}
void print()
{
    for(int i=0;i<n;++i)
    {
        cout<<i<<" :";
        for(auto neighbour:l[i])
        {
            cout<<neighbour<<",";

        }cout<<'\n';
    }
}
};
int main ()
{
    graph g(5);
    g.add_edge(0,2);
    g.add_edge(3,2);
    g.add_edge(3,4);
    g.add_edge(0,1);
    g.add_edge(4,1);
    g.add_edge(3,1);
    g.print();
    return 0;
}

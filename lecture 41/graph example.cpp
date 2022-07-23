#include<iostream>
#include<cstring>
#include<unordered_map>
#include<queue>
#include<list>
using namespace std;
template <typename T>//this is told by the user
class graph {
public:
    unordered_map<T,list<pair<T,int>>>adjlist;
    void addedge(T u,T v,int dist,bool bidir=true)
/// create a hashmap named adjlist value is given adj[u].pushback{v,d)
////printing the hashmap first we go to hashmap (adjlist)
//p/.first->>key,p.second->>value
//for
        {
      adjlist[u].push_back({v,dist});
      if (bidir)
      {
          adjlist[v].push_back({u,dist});
      }

    }
    void print ()
    {
        for (auto p:adjlist){
            cout<<p.first <<"-->";
        for(auto neighbour: p.second)
        {
            cout<<"("<<neighbour.first<<", "<<neighbour.second<<" )";
        }
        cout<<endl;
               }
    }
};

    int main ()
    {
        graph <string>g;
        g.addedge("delhi","jaipur",1);
        g.addedge("delhi","pune",10);
        g.addedge("jaipur","pune",3);
        g.addedge("goa","hyderbad",10);
        g.addedge("delhi","jaipur",1);
        g.print ();
        return 0;
    }

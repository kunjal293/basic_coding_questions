# include <iostream>
#include <unordered_map>
#include <queue>
#include <list>
using namespace std;

template<typename T>

class graph{
public:
    unordered_map<T, list<T>> adjlist;
    void addedge(T u, T v, bool bidir = true){
        adjlist[u].push_back(v);
        if(bidir){
            adjlist[v].push_back(u);
        }
    }

    void print() {
        for(auto p:adjlist){
            cout<<p.first<<"-->";
            for(auto neighbours :p.second){
                cout<<neighbours<<" ";
            }
            cout<<endl;
        }
    }

    void bfs(T src){
    queue<T> q;
    unordered_map<T,bool> visited;
    q.push(src);
    visited[src] = true;

    while(!q.empty()){
        int f =q.front();
        q.pop();
        cout<< f <<" ";
        for(auto neighbour : adjlist[f]){
            if(visited.count(neighbour) == 0){
                q.push(neighbour);
                visited[neighbour] = true;
            }
        }
        cout<<endl;
    }
    }
};

int main() {
    graph<int> g;
    g.addedge(0,1);
    g.addedge(0,3);
    g.addedge(2,3);
    g.addedge(4,3);
    g.addedge(4,5);
    //g.addedge()
//    g.addedge("garvit","himanshu",false);
//    g.addedge("himanshu","avishka",false);
//    g.addedge("avishka","dhruv",false);
//    g.addedge("dhruv","himanshu",false);
//    g.addedge("garvit","dhruv",false);
//    g.addedge("garvit","kunal",false);
//    g.addedge("dhruv","kunal");
//
//    g.print();
    g.bfs(0);
    return 0;
}


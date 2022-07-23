# include <iostream>
# include <list>
# include <unordered_map>
# include <queue>
# include <cstring>
# include <set>
using namespace std;

template <typename T>
class graph{
public:
    unordered_map<T, list<pair<T,int>>> adjlist;

    void addedge(T u, T v, int dis, bool bidir = true){
        adjlist[u].push_back({v,dis});
        if(bidir){
            adjlist[v].push_back({u,dis});
        }
    }

    void print(){
        for(auto p: adjlist){
            cout<<p.first<<"-->";
            for(auto neighbour : p.second){
                cout<<"("<<neighbour.first<<", "<<neighbour.second<<") ";
            }
            cout<<endl;
        }
    }

    void sssp(T src){
    unordered_map<T, int> dist;
    //initialize the distance of every key
    for (auto p: adjlist){
        dist[p.first] = INT_MAX;
    }
    unordered_map<T, T> maabaap;
    set<pair<int, T>> s;
    dist[src]=0;
    maabaap[src]= src;
    s.insert({0,src});

    while(!s.empty()){
        auto address = s.begin();
        s.erase(address);
        auto parent = address->second;
        auto p_d = address->first;
        for(auto n : adjlist[parent]){
            auto children = n.first;
            auto edge_dist = n.second;

            if(dist[children] > p_d + edge_dist){
                auto f = s.find({dist[children],children});

                if(f != s.end()){
                    s.erase(f);
                }
                dist[children] = p_d + edge_dist;
                maabaap[children] = parent;
                s.insert({dist[children],children});
            }
        }

    }
    for (auto p : dist){
        cout<<"distance of " <<p.first <<" from " <<src <<" : "<<p.second <<endl;
    }
    }

};

int main() {
    graph<string> g;

    g.addedge("delhi","jaipur",1);
    g.addedge("delhi","pune",10);
    g.addedge("jaipur","pune",3);
    g.addedge("goa","pune",4);
    g.addedge("goa","hyderabad",10);
    g.addedge("jaipur","hyderabad",4);

    //g.print();
g.sssp("delhi");
    return 0;
}

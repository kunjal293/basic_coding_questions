///
#include<iostream>
#include<vector>
using namespace std;
class minheap{;
              void heapify(int i)
              {
                  int lc=2*i;
                  int rc=lc+1;
                  int mi=i;
                  if(lc<v.size()and v[mi]>v[lc])
                  {
                      mi=lc;
                  }
                  if(rc<v.size()and v[mi]>v[rc])
                  {
                      mi=rc;
                  }
                  if(mi!=i)
                  {
                      swap(v[mi],v[i]);
                    heapify(mi);

                  }
              }
public:
    vector<int >v;
    minheap()
    {
        v.push_back(-1);///0th index os zero so -1 is added
    }
    void push(int d)
    {
        v.push_back(d);
        int i=v.size()-1;
        int p=i/2;
        while(i>1 and v[p]>v[i])
        {
            swap(v[i],v[p]);
            i=p;
            p/=2;
        }
    }
    void pop ()
    {
       swap (v[1],v[v.size()-1]);
       v.pop_back();
       heapify(1);
    }
    bool empty()
    {
        return v.size()==1;
    }
    int top()
    {
        return v[1];
    }
};
int main ()
{
    minheap h;
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

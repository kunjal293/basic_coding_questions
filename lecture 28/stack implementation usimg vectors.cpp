#include<iostream>
#include<vector>

using namespace std;
template<typename T>//user tells the datatype of t
class stack{
public:
    vector<int>v;
    void push(T data){
    v.push_back(data);
    v.push_back(data);
    }
    void pop(){
    v.pop_back();
    }
   T top(){
    return v[v.size()-1];
    }
    bool empty(){
    v.size()==0;
    }
    };
int main ()
{
    stack<char>s;
    s.push('A');
     s.push('B');
      s.push('C');
       s.push('D');
       while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
       }
       cout<<endl;

    return 0;
}

//creating a binary tree.cpp
//input :8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
///no of nodes in a tree.cpp

#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node*left,*right;
    node(int d):data(d),left(NULL),right(NULL){}
};
node*createtree()///creating a tree
{
    node*root=NULL;
    int data;
    cin>>data;
    if(data==-1)
    {

        return root;
    }
    else{
        root=new node(data);
        root->left=createtree();
        root->right=createtree();
    }
    return root;
}
void postorder(node*root)
{
    //base case
    if(root==NULL)
    {

        return ;
    }
    //recursive case
    postorder(root->left);

    postorder(root->right);
    cout<<root->data<<" ";

}
int countnodes(node*root)
{
    //base case
    if(root=NULL)
    {
        return 0;
    }
    //recursive case
    return countnodes(root->left)+countnodes(root->right)+1;
}
int main ()
{
    node*root=NULL;
    root=createtree();
    cout<<"binary tree when postorder used :" ;
    postorder(root);
   cout<<endl;
    cout<<"no of nodes present in the tree:";
    countnodes(root);
    cout<<endl;
    return 0;
}



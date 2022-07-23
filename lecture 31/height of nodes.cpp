///height of tree.cpp

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
int height (node*root)
{
    //base case
    if(root=NULL)
    {
        return 0;
    }
    //recursive case
    int left_height=height(root->left);
    int right_height=height(root->right);
    return max(left_height,right_height)+1;
}
int main ()
{
    node*root=NULL;
    root=createtree();
    postorder(root);

    cout<<height(root);
    return 0;
}



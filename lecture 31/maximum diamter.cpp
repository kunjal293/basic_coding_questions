///diameter of tree.cpp
//diameter is  maximum distance between 2 nodes .

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
int diameter (node*root)
{
    //base case
    if(root=NULL)
    {
        return 0;
    }
    //recursive case
    //1.diameter via root node//op1 is option 1
    int op1=diameter(root->left)+diameter(root->right);
    //2.diameter only excits in lst
    int op2=diameter(root->left);
    //3. diameter only excists in rst
    int op3=diameter(root->right);
    return max(op1,max(op2,op3));
}
int main ()
{
    node*root=NULL;
    root=createtree();
    postorder(root);

    cout<<diameter(root);
    return 0;
}


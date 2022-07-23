///diameter of tree.cpp
//diameter is  maximum distance between 2 nodes .
//8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
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
int diameter (node*root)
{
    //base case
    if(root=NULL)
    {
        return 0;
    }
    //recursive case
    //1.diameter via root node//op1 is option 1
    int op1=height(root->left)+height(root->right);
    //2.diameter only excits in lst
    int op2=height(root->left);
    //3. diameter only excists in rst
    int op3=height(root->right);
    return max(op1,max(op2,op3));
}
pair fastdia(node*root)
{
    //base case
    if(root==NULL)
    {
        pair p;
        p.height=0;
        p.diameter=0;
        return p;
    }
    //recursive case
    pair left=fastdia(root->left)
    pair right=fastdia(root->right)
    pair p;
    p.height=max(left.height,right.height)+1;
    //diameter
    int op1= left.height+right.height;
    int op2=left.diameter;
    int op3=right.diameter;
    p.diameter= max(op1,max(op2,op3));
    return p;
}
int main ()
{
    node*root=NULL;
    root=createtree();
    postorder(root);
    cout<<endl;
    cout<<"diameter of the nodes";
    diameter(root);
    cout<<endl;
    cout<<"fast height"<<ans.height<<endl;
    cout<<"fast diameter "<<ans.diamter<<endl;
    return 0;
}



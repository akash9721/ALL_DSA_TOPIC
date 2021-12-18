#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    node*left;
    node*right;
     node(int k)
     {
         key=k;
         left=right=NULL;
     }
};
node*insert(node*root,int x)
{
   if(root==NULL)
    return new node(x);
   else if(root->key<x)
    root->right=insert(root->right,x);
   else if(root->key>x)
    root->left=insert(root->left,x);
   return root;
}
void inorder(node*root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
int main()
{
    node*root=new node(40);
    root->left=new node(35);
    root->right=new node(50);
    root->right->left=new node(45);
    root->right->right=new node(60);

    root=insert(root,20);
    inorder(root);


}

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
bool search(node*root,int x)
{
    while(root!=NULL)
    {
        if(root->key==x)
            return true;
        else if(root->key<x)
            root=root->right;
        else
            root=root->left;
    }
    return false;
}
int main()
{
    node*root=new node(40);
    root->left=new node(35);
    root->right=new node(50);
    root->right->left=new node(45);
    root->right->right=new node(60);
    if(search(root,40))
        cout<<"present";
    else
        cout<<"not present";
}

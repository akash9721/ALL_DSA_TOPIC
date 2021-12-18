
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    struct node*left;
    struct node*right;
    node(int k)
    {
        key=k;
        left=right=NULL;
    }
};
void postorder(node*root)
{
    if(root!=NULL)
    {
        cout<<root->key<<" ";
        postorder(root->left);
        postorder(root->right);
    }
}
int main()
{
    node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);
    postorder(root);
}

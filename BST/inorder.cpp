
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
    node*root=new node(11);
    root->left=new node(3);
    root->right=new node(17);

    root->left->right=new node(4);
    root->right->left=new node(10);
    inorder(root);
}


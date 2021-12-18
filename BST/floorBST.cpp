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
node*floor(node*root,int x)
{
   node*res=NULL;
   while(root!=NULL)
   {
       if(root->key==x)
        return root;
       else if(root->key>x)
        root=root->left;
       else
       {
           res=root;
           root=root->right;
       }
   }
   return res;

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

    cout<<(floor(root,55)->key);
    cout<<endl;
    inorder(root);


}


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

void inorder(node*root,vector<int> & li)
{
    if(root!=NULL)
    {
        inorder(root->left,li);
        li.push_back(root->key);
        inorder(root->right,li);
    }
}

bool pairpre(node*root,int sum)
{
    vector<int> a;
    inorder(root,a);
    int k=0;
    int l=a.size()-1;
    while(k<l)
    {
        if(a[k]+a[l]==sum)
            return true;
        else if(a[k]+a[l]>sum)
            l--;
        else
            k++;
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
    cout<<endl;
    int sum=8;
    if(pairpre(root,sum))
        cout<<"present";
        else
            cout<<"not present";



}



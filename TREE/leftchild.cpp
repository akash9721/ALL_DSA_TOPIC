
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
vector<int> leftchild(node*root)
{
    vector<int> v;

  queue<node*> q;
  q.push(root);
  while(q.empty()==false)
  {
      int si=q.size();

      for(int i=0;i<si;i++)
      {
          node*cur=q.front();
          q.pop();
          if(i==si-1)
            v.push_back(cur->key);
          if(cur->left!=NULL)
            q.push(cur->left);
          if(cur->right!=NULL)
            q.push(cur->right);
      }
  }
  return v;
}
void sumofnodedata2(node*root)
{
   if(root==NULL)
    return;
   queue<node*> q;
   q.push(root);
   int sum=0;
   while(q.empty()==false)
   {
       node*curr=q.front();
       q.pop();
       sum=sum+curr->key;
       if(curr->left!=NULL)
        q.push(curr->left);
       if(curr->right!=NULL)
        q.push(curr->right);
   }
   cout<<sum;

}
int main()
{
    node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);
    vector<int> vv=leftchild(root);
    for(int x:vv)
    {
        cout<<x<<" ";
    }
    cout<<endl;
     sumofnodedata2(root);
}


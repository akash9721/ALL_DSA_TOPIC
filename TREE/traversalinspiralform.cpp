
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
void spiralform(node*root)
{
   if(root==NULL)
        return;
   queue<node*> q;

   stack<int> s;
   bool revers=true;
   q.push(root);

   while(q.empty()==false)
   {
       int si=q.size();
       for(int i=0;i<si;i++)
       {
           node*cur=q.front();
           q.pop();
           if(revers)
           {
               s.push(cur->key);
           }
           else
           cout<<cur->key<<" ";
           if(cur->left!=NULL)
            q.push(cur->left);
           if(cur->right!=NULL)
            q.push(cur->right);
       }
       if(revers)
       {
           while(s.empty()==false)
           {
               cout<<s.top()<<" ";
               s.pop();
           }
       }
       revers=!revers;
       cout<<endl;
   }
}
int main()
{
    node*root=new node(50);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(10);
    root->right->right=new node(20);
    spiralform(root);
}


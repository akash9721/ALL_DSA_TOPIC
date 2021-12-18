
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*left;
    Node*right;
    Node(int k)
      {
          data=k;
          left=right=NULL;
      }
};
int sizeofmxroot(Node*root)
{
    if(root==NULL)
        return INT_MIN;
    else
        return max(root->data,max(sizeofmxroot(root->left),sizeofmxroot(root->right)));

}
int main()
{
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(400);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	root->right->right=new Node(70);

	cout<<sizeofmxroot(root);
}


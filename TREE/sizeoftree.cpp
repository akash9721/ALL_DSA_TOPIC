
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
int sizeoftree(Node*root)
{
    if(root==NULL)
        return 0;
    else
        return sizeoftree(root->left)+sizeoftree(root->right)+1;

}
int main()
{
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	root->right->right=new Node(70);

	cout<<sizeoftree(root);
}

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
node*addnode(node*head,int x)
{
    node*temp=new node(x);
    if(head==NULL)
        return temp;
    node *cur=head;
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    cur->next=temp;
    return head;
}
void show(node*p)
{
    while(p!=0)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    node*head=NULL;
    head=addnode(head,10);
    head=addnode(head,20);
    head=addnode(head,30);
    head=addnode(head,40);
    head=addnode(head,50);
    show(head);

}


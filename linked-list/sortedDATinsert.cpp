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
void show(node*p)
{

    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
node*insertsorted(node*first,int x)
{
    node*temp=new node(x);
    if(first==NULL)
      return temp;
    if(x<first->data)
    {
        temp->next=first;
        return temp;
    }
    node*p=first;
    while(p->next!=NULL && p->next->data<x)
        p=p->next;
    temp->next=p->next;
    p->next=temp;
    return first;

}
int main()
{
    node*first=new node(10);
    first->next=new node(20);
    first->next->next=new node(30);
    first->next->next->next=new node(40);
    show(first);
    cout<<endl;

    first=insertsorted(first,24);
    show(first);
}


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
node*addpos(node*head,int x,int pos)
{
    node*temp=new node(x);
    if(pos==1)
    {
        temp->next=head;
        return temp;
    }
    node*cur=head;
    for(int i=1;i<=pos-2 && cur!=NULL;i++)
    {
        cur=cur->next;
    }
    if(cur==NULL)
    return head;
    temp->next=cur->next;
    cur->next=temp;
    return head;
}
int main()
{
    node*first=new node(10);
    first->next=new node(20);
    first->next->next=new node(30);
    first->next->next->next=new node(40);
    show(first);
    cout<<endl;

    first=addpos(first,100,5);
    show(first);
}


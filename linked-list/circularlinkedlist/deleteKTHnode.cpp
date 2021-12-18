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
void show(node*head)
{
    node*curr=head;
    do
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=head);
}
node*addnextO1(node*head,int x)
{
    node*temp=new node(x);
    node*p=head;
    if(p==NULL)
    {
        temp->next=temp;
        return temp;
    }
    else
    {
      temp->next=p->next;
      p->next=temp;
      int t=temp->data;
      temp->data=p->data;
      p->data=t;
      return head;
    }

}

node*deleteheadO1(node*head)
{
    if(head==NULL)
        return NULL;
    if(head->next==head)
    {
        delete head;
        return NULL;
    }
    head->data=head->next->data;
    node*temp=head->next;
    head->next=head->next->next;
    delete(temp);
    return head;
}
node*deletekth(node*head,int k)
{

    if(head==NULL)
    {
        return NULL;
    }
    node*p=head;
    if(k==1)
    {
        return deleteheadO1(head);
    }
    for(int i=0;i<k-2;i++)
    {
        p=p->next;
    }
    node*temp=p->next;
    p->next=p->next->next;
    delete(temp);
    return head;


}
int main()
{
    node*head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=head;
    show(head);
    cout<<endl;

    head=deletekth(head,5);
    show(head);
    cout<<endl;

    //head=deleteheadO1(head);
    //show(head);
}



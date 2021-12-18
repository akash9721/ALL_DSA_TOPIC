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
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
node*deletenodeend(node*head)
{
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
    {
        delete(head);
        return NULL;
    }
    node*curr=head;
    node*q=NULL;
    while(curr->next!=NULL)
    {
        q=curr;
        curr=curr->next;
    }
    q->next=NULL;
    delete(curr);
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

    first=deletenodeend(first);
    show(first);

}



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
bool palindron(node*head)
{
    stack<char> s;
    for(node*curr=head;curr!=NULL;curr=curr->next)
    {
        s.push(curr->data);
    }
    for(node*curr=head;curr!=NULL;curr=curr->next)
    {
        if(s.top()!=curr->data)
        {
            return false;
        }
        s.pop();
    }
    return true;

}
int main()
{
    node*first=new node('a');
    first->next=new node('b');
    first->next->next=new node('a');
    show(first);
    cout<<endl;
    if(palindron(first))
        cout<<"yes";
    else
        cout<<"no";

}


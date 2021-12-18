#include<bits/stdc++.h>
using namespace std;
void minheap(int a[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int>> mh;
    for(int i=0;i<n;i++)
    {
        mh.push(a[i]);
    }
    cout<<mh.size()<<endl;
    cout<<mh.top()<<endl;
   // mh.pop();
    while(mh.empty()==false)
    {
        cout<<mh.top()<<" ";
        mh.pop();
    }
    cout<<endl;

}
int main()
{
    int a[]={5,15,10,20,8,25,18};
    int n=sizeof(a)/sizeof(a[0]);
    minheap(a,n,3);

}

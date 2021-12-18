#include<bits/stdc++.h>
using namespace std;
void klargest(int a[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int>> mh;
    for(int i=0;i<k;i++)
    {
        mh.push(a[i]);
    }
    for(int i=k;i<n;i++)
    {
        if(mh.top()>a[i])
            continue;
        else
        {
            mh.pop();
            mh.push(a[i]);
        }
    }
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
    klargest(a,n,4);

}


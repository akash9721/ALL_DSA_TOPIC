#include<bits/stdc++.h>
using namespace std;
void stockspan(int a[],int n)
{
    stack<int> s;
    s.push(0);
    cout<<"1"<<" ";
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && a[s.top()]<=a[i])
        {
            s.pop();
        }
        int span=s.empty()?i+1:i-s.top();
        cout<<span<<" ";
        s.push(i);
    }
}
int main()
{
    int a[]={18,12,13,14,11,16};
    int n=sizeof(a)/sizeof(a[0]);
    stockspan(a,n);
}

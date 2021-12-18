#include<bits/stdc++.h>
using namespace std;
void intersect(int a[],int b[],int n,int m)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(int j=0;j<m;j++)
    {
        s.insert(b[j]);
    }
    for(auto x:s)
    {
        cout<<x<<" ";
    }

}
int main()
{
    int a[]={10,15,20,15,30,30,5};
    int b[]={30,5,30,8};
    int an=sizeof(a)/sizeof(a[0]);
    int bn=sizeof(b)/sizeof(b[0]);
    intersect(a,b,an,bn);
}


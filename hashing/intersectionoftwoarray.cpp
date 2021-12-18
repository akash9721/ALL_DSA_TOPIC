#include<bits/stdc++.h>
using namespace std;
void intersect(int a[],int b[],int an,int bn)
{
    unordered_set<int> us;
    for(int i=0;i<an;i++)
    {
        us.insert(a[i]);
    }
    int cnt=0;
    for(int j=0;j<bn;j++)
    {
        if(us.find(b[j])!=us.end())
        {
            //cnt++;
            cout<<b[j]<<" ";
            us.erase(b[j]);
        }
    }
    //return cnt;
}
int main()
{
    int a[]={10,15,20,15,30,30,5};
    int b[]={30,5,30,8};
    int an=sizeof(a)/sizeof(a[0]);
    int bn=sizeof(b)/sizeof(b[0]);
    intersect(a,b,an,bn);
}

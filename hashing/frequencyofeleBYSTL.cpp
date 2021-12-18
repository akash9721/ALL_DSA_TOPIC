
#include<bits/stdc++.h>
using namespace std;
void fre(int a[],int n)
{
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
   /* for(auto x:m)
    {
        cout<<x.first<<"->"<<x.second<<endl;
    }*/
    for(int i=0;i<n;i++)
    {
        if(m[a[i]]!=-1)
        {
            if(m[a[i]]==1)
            {
            cout<<a[i]<<"->"<<m[a[i]]<<endl;
            m[a[i]]=-1;
            }
        }
    }

}
int main()
{
    int a[]={10,20,10,30,40,20,10,50,60,60};
    int n=sizeof(a)/sizeof(a[0]);
    fre(a,n);
}


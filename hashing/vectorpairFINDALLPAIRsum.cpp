#include<bits/stdc++.h>
using namespace std;
void findpairsum(int a[],int b[],int n,int m,int sum)
{
    vector<pair<int,int>> s;
    for(int i=0;i<n;i++)
    {
        int j=0;
        while(j<m)
        {
            if(a[i]+b[j]==sum)
                s.push_back(make_pair(a[i],b[j]));
            j++;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i].first<<" "<<s[i].second<<endl;
    }
}
int main()
{
    int a[]={1, 2, 4, 5, 7};
    int b[]={5, 6, 3, 4, 8};
    int sum=9;
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    findpairsum(a,b,n,m,sum);

}

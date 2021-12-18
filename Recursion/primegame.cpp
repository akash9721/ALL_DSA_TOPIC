

#include<bits/stdc++.h>
using namespace std;
bool cntprime(int n)
{
   if(n==1)
    return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       int low,high;
        cin>>low>>high;
       for(int i=low;i<=high;i++)
        {
           if(cntprime(i))
           v.push_back(i);
        }
        if(v.empty()==true)
        cout<<"-1"<<endl;
        if(v.size()==1)
        cout<<"0"<<endl;
        if(v.size()>1)
            cout<<(v[v.size()-1]-v[0])<<endl;
       /* if(v.size()>1)
        {
            int x=*max_element(v.begin(),v.end());
            int y=*min_element(v.begin(),v.end());
            cout<<(x-y)<<endl;
        }*/
        v.resize(0);
    }
}


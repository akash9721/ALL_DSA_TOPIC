#include<bits/stdc++.h>
using namespace std;
void beauti(string str)
{
    for(int i=1;i<=str.length()/2;i++)
    {
        string a=str.substr(0,i);
        string value=a;
        long long int x=stoll(a);
        while(a.length()<str.length())
        {
            a+=to_string(++x);
        }
        if(a.compare(str)==0)
            cout<<"YES"<<" "<<value<<endl;
    }
    cout<<"NO"<<endl;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        beauti(str);
    }
}


#include<bits/stdc++.h>
using namespace std;
int disinct(int a[],int n)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    return s.size();
}
void distinctstr(string str)
{
    unordered_set<char> ss;
    for(int i=0;i<str.length();i++)
    {
        ss.insert(str[i]);
    }
    for(auto it=ss.begin();it!=ss.end();it++)
    {
        cout<<*it;
    }

}
int main()
{
    int a[]={10,20,10,30,40,20,10,50,60,60};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<disinct(a,n);
    string str="akash";
    distinctstr(str);
}

#include<bits/stdc++.h>
using namespace std;
void countfreq(string str,int n)
{
    map<char,int> m;
    for(int i=0;i<n;i++)
    {
        m[str[i]]++;
    }
    cout<<"frequency elements are"<<endl;
    for(auto x:m)
    {

        cout<<x.first<<"-->"<<x.second<<endl;
    }


}
int main()
{
    string str="Akash kumar";
    int n=str.length();
    countfreq(str,n);


}


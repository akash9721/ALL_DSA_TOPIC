#include<bits/stdc++.h>
using namespace std;
void powerset(string st)
{
    int m=st.length();
    int n=pow(2,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i&(1<<j))!=0)
                cout<<st[j];
        }
        cout<<endl;
    }
}
int main()
{
    string str;
    getline(cin,str);
    powerset(str);
}

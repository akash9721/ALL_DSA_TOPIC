#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="aaabbbbaaaccc";
    sort(str.begin(),str.end());

    auto it=unique(str.begin(),str.end());
    cout<<string(str.begin(),it)<<" ";


}

#include <bits/stdc++.h>
using namespace std;
void check(string s1,string s2)
{
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
    cout<<"equal"<<endl;
    else
        cout<<"not equal";
}

int main() {
    string s1="akash";
    string s2="kahap";
    check(s1,s2);



	return 0;
}


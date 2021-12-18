#include<bits/stdc++.h>
using namespace std;
bool stringpalin(string st,int start,int end)
{
    if(start>=end)
        return true;
    return((st[start]==st[end]) && stringpalin(st,++start,--end));
}
int main()
{
    string str;
    getline(cin,str);

    if(stringpalin(str,0,str.length()-1))
        cout << str << " is a Palindrome." << endl;
    else
        cout << str << " is not a Palindrome." << endl;
}


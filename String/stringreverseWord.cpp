//i.like.this.program.very.much

#include<bits/stdc++.h>
using namespace std;
string revword(string str)
{
    int l,r=0;
    while(l<str.length())
    {
        while(r<str.length() && str[r]!='.')
            r++;
        reverse(str.begin()+l,str.begin()+r);
        l=r+1;
        r=l;
    }
    reverse(str.begin(),str.end());
    return str;
}



int main()
{
    string str;
    getline(cin,str);
    cout<<"before string :"<<str;
    cout<<"\nafter reversing string :"<<revword(str)<<endl;

}

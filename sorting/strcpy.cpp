#include <bits/stdc++.h>
using namespace std;
void cpy(char str[],char str2[])
{
    int i=0;
    for(i=0;str[i]!='\0';i++)
    {
        str2[i]=str[i];
    }
    str[i]='\0';
}

void cpy2(string s1,int n)
{
    string s2=s1.substr(1,n);
    cout<<s2;
}
int main() {
    char str[10]="akash";
    char str2[10]="";
    cpy(str,str2);
    cout<<str2;
    cout<<endl;
    string s1="akash";
    int n=s1.length();
    cpy2(s1,n);
    cout<<endl;



	return 0;
}

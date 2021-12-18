#include<bits/stdc++.h>
using namespace std;
string roman(int n)
{
    string t[]={"","M","MM","MMM"};
    string h[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string T[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string o[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};

    string tho=t[n/1000];
    string hun=h[(n%1000)/100];
    string ten=T[(n%100)/10];
    string one=o[n%10];

    string ans=tho+hun+ten+one;
    return ans;


}
int main()
{
    int n=3239;
    cout<<roman(n);

}

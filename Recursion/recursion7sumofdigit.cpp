#include<bits/stdc++.h>
using namespace std;
int sumofdigit(int n)
{
    if(n<=9)
        return n;
    return (n%10)+sumofdigit(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<sumofdigit(n);
}

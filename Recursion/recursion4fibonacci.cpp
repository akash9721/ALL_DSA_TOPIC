

#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n<=1)
        return n;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    cin>>n;
    if(n>=5 && n<=20)
    {
    cout<<"fibonacci of "<<n<<" is: ";
    int cnt1=0;
    int cnt2=0;
    for(int i=1;i<=n;i++)
    {
        int y=fibo(i);
        cout<<y<<" ";
        if(y%2==0)
        cnt1++;
        else
        cnt2++;

    }
    cout<<endl;
    cout<<cnt1<<endl;
    cout<<cnt2;
    }
    else
    {
        cout<<"INVALID INPUT";
    }

}


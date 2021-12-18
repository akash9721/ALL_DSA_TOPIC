#include<bits/stdc++.h>
using namespace std;
void noareNto1(int n)
{
    if(n==0)
        return;
    cout<<n<<" ";
    noareNto1(n-1);

}
void noare1toN(int n)
{
    start:
    if(n==0)
        return;

    //noare1toN(n-1);
    //cout<<n<<" ";
    n=n-1;
    cout<<n<<" ";
    goto start;


}
int main()
{
    int n;
    cin>>n;
   // noareNto1(n);
    noare1toN(n);
}

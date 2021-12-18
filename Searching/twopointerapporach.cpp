#include<bits/stdc++.h>
using namespace std;
bool findpair(int a[],int n,int x)
{
    sort(a,a+n);
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if((a[i]+a[j])==x)
        {
            cout<<"pair is  "<<a[i]<<","<<a[j];
            return true;
        }
        else if((a[i]+a[j])>x)
            j--;
        else
            i++;
    }
    return false;
}
int main()
{
    int a[]={3,5,9,2,8,10,11};
    int n=sizeof(a)/sizeof(a[0]);
    int x=17;
    findpair(a,n,x);

}


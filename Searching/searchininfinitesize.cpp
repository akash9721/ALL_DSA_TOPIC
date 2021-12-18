#include<bits/stdc++.h>
using namespace std;
int seach(int a[],int x)
{
    int i=0;
    while(1)
    {
        if(a[i]==x)
            return i;
        if(a[i]>x)
            return -1;
        i++;
    }
}
int main()
{
    int a[]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200,210,220,220,230,240,250,260,270,280,290,300};
    int x=191;
    cout<<seach(a,x);
}

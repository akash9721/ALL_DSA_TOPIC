#include<bits/stdc++.h>
using namespace std;
bool sortornot(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
            return false;
    }
    return true;

}

void show(vector<int> vec)
{
    for(int x:vec)
    {
        cout<<x<<" ";
    }
}
int main()
{
    int a[]={1,2,4,23,56,78,90};
    int n=sizeof(a)/sizeof(a[0]);

    if(sortornot(a,n))
        cout<<"array is sorted"<<endl;
    else
    cout<<"array is not sorted";
    cout<<endl;


    vector<int> v(a,a+n);
    reverse(v.begin(),v.end());
    show(v);
}

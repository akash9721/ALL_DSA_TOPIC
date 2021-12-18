#include<bits/stdc++.h>
using namespace std;
void show(vector<int> a)
{

   /* for(int x:a)
    {
        cout<<x<<" ";
    }*/
    for(auto it=a.begin();it!=a.end();it++)
    {

        cout<<*it<<" ";
    }



}
int main()
{
    vector<int> arr{10,20,30,40,50};
    show(arr);
    cout<<endl;
    vector<int>::iterator i=arr.begin();
    arr.insert(i+3,3,300);
    show(arr);
}

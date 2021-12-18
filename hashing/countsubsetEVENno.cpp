#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

   unordered_set<int> us;

    int even=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        us.insert(a[i]);
    }

    even=us.size();
    cout<< (pow(2,even)-1);
    }


}

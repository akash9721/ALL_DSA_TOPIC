#include<bits/stdc++.h>
using namespace std;

template<typename T>
T mymax(T a,T b)
{
    return (a>b)?a:b;
}
int main()
{
    cout<<mymax<int>(12,56);
    cout<<endl;
    cout<<mymax<char>('c','q');
    cout<<endl;
    cout<<mymax<float>(20.1,20);
}

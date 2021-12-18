
#include<bits/stdc++.h>
using namespace std;
struct stackop
{
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    void show()
    {
       for(auto x:v)
       {
        cout<<x<<" ";
       }
    }
    int pop()
    {
        int res=v.back();
        v.pop_back();
        return res;
    }
    int peek()
    {
        return v.back();
    }
    int size()
    {
        v.size();
    }
    int isempty()
    {
        return v.empty();
    }
};
int main()
{
    stackop s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.show();
    cout<<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isempty();
}


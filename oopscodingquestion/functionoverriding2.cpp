#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    void display()
    {
        cout<<"this is base function";
    }
};
class der:public base
{
public:
    void display()
    {
       cout<<"this is derived function";
    }
};
int main()
{
    der d;
    d.display();
    d.base::display();
}

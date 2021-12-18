#include<bits/stdc++.h>
using namespace std;


class base
{
    int a,b;
public:
    virtual void display()=0;
};
class der:public base
{
public:
    void display()
    {
        cout<<"this is pure virtual fun";
    }
};
int main()
{
    der obj;
    obj.display();
}

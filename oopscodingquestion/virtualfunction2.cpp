#include<bits/stdc++.h>
using namespace std;

class base
{
public:
    void display()
    {
        cout<<"this is base display function"<<endl;
    }
};
class der:public base
{
public:
    virtual void display()
    {
        cout<<"this is derived display function"<<endl;
    }
};
int main()
{
   base *p,pobj;
   der d;
   p=&pobj;
   p=&d;
   p->display();


}

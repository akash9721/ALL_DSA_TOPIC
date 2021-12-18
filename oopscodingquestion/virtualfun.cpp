
#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    virtual void display()
    {
        cout<<"this is base display"<<endl;
    }
    void show()
    {
        cout<<"this is base show"<<endl;
    }
};
class der:public base
{
public:
    void display()
    {
        cout<<"this is derived display"<<endl;
    }
    void show()
    {
        cout<<"this is derived show"<<endl;
    }
};
int main()
{
    base *ptr;
    der d;
    ptr=&d;
    ptr->display();
    ptr->show();
}

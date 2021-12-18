#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    void display()
    {
        cout<<"this is base display";
    }
};
class derive:public base
{
public:
    void display()
    {
        cout<<"this is derive display";
    }

};
int main()
{
    derive b;
    b.display();
    cout<<endl;
    b.base::display();
}

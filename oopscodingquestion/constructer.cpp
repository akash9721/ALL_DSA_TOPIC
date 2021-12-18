#include<bits/stdc++.h>
using namespace std;
class akk
{
public:
    int m,n;
    akk()
    {
        m=0;
        n=0;
    }
    akk(int x,int y)
    {
        m=x;
        n=y;
    }
    int cget()
    {
        return m;
    }
    int cgetn()
    {
        return n;
    }
    akk(akk & i)
    {
        m=i.m;
        n=i.n;
    }
};
int main()
{
   akk a;
   cout<<a.m<<" "<<a.n<<endl;
   akk b(10,20);
  // cout<<b.cget()<<" "<<b.cgetn()<<endl;
    cout<<b.m<<" "<<b.n<<endl;
   akk c(b);
   cout<<c.cget()<<" "<<c.cgetn()<<endl;
}

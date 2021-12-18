#include<bits/stdc++.h>
using namespace std;
const int ALP=26;
struct triesnode
{
    triesnode *child[ALP];
    bool isendworld;
};
struct triesnode*getnode(void)
{
    struct triesnode *rnode=new triesnode;
    rnode->isendworld=false;
    for(int i=0;i<ALP;i++)
    {
      rnode->child[i]=NULL;
    }

    return rnode;
};
void insert(triesnode*root,string st)
{
   triesnode*p=root;
   for(int i=0;i<st.length();i++)
   {
       int index=st[i]-'a';
       if(p->child[index]==NULL)
       p->child[index]=getnode();

       p=p->child[index];
   }
   p->isendworld=true;
}
bool search(triesnode*root,string st)
{
    triesnode*p=root;
    for(int i=0;i<st.length();i++)
    {
        int index=st[i]-'a';
        if(p->child[index]==NULL)
        return false;
         p=p->child[index];
    }
    return (p!=NULL && p->isendworld);
}
int main()
{
  string keys[] = {"bad", "bat", "geek", "geeks", "cat", "cut"};
  int n=sizeof(keys)/sizeof(keys[0]);

  triesnode *root=getnode();
  for(int i=0;i<n;i++)
    insert(root,keys[i]);

    search(root, "bat")? cout << "Yes\n" :
						cout << "No\n";
	search(root, "gee")? cout << "Yes\n" :
						cout << "No\n";
    search(root, "geek")? cout << "Yes\n" :
						cout << "No\n";



}

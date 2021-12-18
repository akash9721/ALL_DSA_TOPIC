#include<bits/stdc++.h>
using namespace std;
	string removeDups(string s)
	{
	    // Your code goes here
	   int hash[26]={0};
	   string res="";
	   for(int i=0;i<s.length();i++)
	   {
	       if(hash[s[i]]==0)
	       {
	           hash[s[i]]=1;
	           res.push_back(s[i]);
	       }
	   }
	   return res;


	}
	int main()
	{
	    string str="kvva";
        cout<<removeDups(str);

	}

#include <bits/stdc++.h>
using namespace std;
//bool areanagram(string str,string s2)
//{
    int areanagram(string A, string B)
{
    int i,len =A.length();
    int a[26],b[26];
    for(i=0;i<26;i++)
    {
        a[i]=0;
        b[i]=0;
    }
    for(i=0;i<len;i++)
    {
        a[A[i]-'a']++;
    }
    for(i=0;i<len;i++)
    {
        b[B[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]!=b[i])
            return 0;
    }
    return 1;
}



   /* sort(str.begin(),str.end());
    sort(s2.begin(),s2.end());
    if(str==s2)
     return true;
    else
     return false;*/


    /* map<char,int> m;
	for(int i=0;i<str.length();i++)
		m[str[i]]++;
	for(int i=0;i<s2.length();i++)
		m[s2[i]]--;
	for(auto it=m.begin();it!=m.end();it++)
		if(it->second!=0)
			return false;
	return true;*/
//}
int countkanagram(string s1,string s2)
{

    int cnt=0;

    for(int i=0;i<=s1.length()-s2.length();i++)
    {
        string str=s1.substr(i,s2.length());
        if(areanagram(str,s2))
            cnt++;

    }
    return cnt;
   /* int count=0;
	//sliding window
	for(int i=0;i<s1.length()-s2.length()+1;i++){
            string ss1=s1.substr(i,s2.length());
		if(areanagram(ss1,s2))
			count++;
	}
	return count;*/
}

int main() {
    string s1="aabaabaa";
    string s2="aaba";
    cout<<countkanagram(s1,s2);



	return 0;
}



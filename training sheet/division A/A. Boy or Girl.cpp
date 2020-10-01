#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	
	string s;
	int A[26]={0};
	cin>>s;
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		A[s[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(A[i]!=0)
		{
			count++;
		}
	}
	if(count%2)
	{
		cout<<"IGNORE HIM!";
	}
	else
	{
		cout<<"CHAT WITH HER!";
	}
return 0;	
}

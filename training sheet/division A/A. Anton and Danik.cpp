#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count=0;
	int count1=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='A')
		{
			count++;
		}
		else
		{
			count1++;
		}
	}
	if(count>count1)
	{
		cout<<"Anton"<<endl;
	}
	else if(count1>count)
	{
		cout<<"Danik"<<endl;
	}
	else
	{
		cout<<"Friendship"<<endl;
	}
	
	return 0;
}

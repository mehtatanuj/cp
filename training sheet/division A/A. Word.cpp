#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	
	string s;
	cin>>s;
	int count=0;
	int count1=0;
	for(int i=0;i<s.length();i++)
	{
		if(isupper(s[i]))
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
		transform(s.begin(),s.end(),s.begin(),::toupper);
		cout<<s<<endl;
	}
	else
	{
		transform(s.begin(),s.end(),s.begin(),::tolower);
		cout<<s<<endl;
	}
	
	
return 0;	
}

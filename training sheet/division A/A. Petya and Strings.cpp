#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	
	string s,s1;
	cin>>s>>s1;
	int flag=0;
	 transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
	  transform(s.begin(), s.end(), s.begin(), ::tolower); 
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>s1[i])
		{
			flag=1;
			cout<<"1"<<endl;
			break;
		}
		if(s[i]<s1[i])
		{
			cout<<"-1"<<endl;
			flag=1;
			break;
		}
		else
		{
			
		}
		
	}
	if(flag==0)
	{
		cout<<"0"<<endl;
	}
	
return 0;	
}

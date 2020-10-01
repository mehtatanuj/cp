#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
string s,t;
	cin>>s>>t;
	int k=0;
	for(int i=0;i<t.length();i++)
	{
		if(t[i]==s[k])
		{
			k++;
		}
	}
	cout<<k+1<<endl;
	
	
return 0;	
}

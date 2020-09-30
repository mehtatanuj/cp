#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	int count=0,count1=0;
	while(t--)
	{
		count=0;
		int a,b,c;
		cin>>a>>b>>c;
		if(a==1)
		{
			count++;
		}
		if(b==1)
		{
			count++;
		}
		if(c==1)
		{
			count++;
		}
		if(count>1)
		{
			count1++;
		}
	}
	cout<<count1<<endl;
	
	
return 0;	
}

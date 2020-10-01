#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	int n,x;
	cin>>n;
	int count=1;
	string s;
	cin>>x;
	n--;
	int curr=x;
	
	while(n--)
	{
		cin>>x;
		if(curr!=x)
		{
			count++;
			curr=x;
		}
		
			
	}
	cout<<count<<endl;
	
return 0;	
}

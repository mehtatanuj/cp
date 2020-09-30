#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int count=0;
	while(n<=m)
	{
		count++;
		n=3*n;
		m=2*m;
	}
	cout<<count;
	
	
return 0;	
}

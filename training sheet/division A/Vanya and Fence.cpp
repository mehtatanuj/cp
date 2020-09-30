#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int A[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
	cin>>A[i];	
	if(A[i]>m)
	{
		count+=2;
	}
	else
	{
		count++;
	}
	}
	cout<<count<<endl;	
	
	
	
	
	
}

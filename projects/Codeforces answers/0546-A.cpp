#include<iostream>
using namespace std;
int main()
{
	int k,n,w;
	cin>>k>>n>>w;
	long long sum=0;
	long long ans;
	for(int i=1;i<=w;i++)
	{
		sum+=i*k;
	}
	if(sum<=n) ans=0;
	else ans=sum-n;
	cout<<ans;
	return 0;
 } 

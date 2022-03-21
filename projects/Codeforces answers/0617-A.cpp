#include<iostream>
using namespace std;
int main()
{
	long long x;
	cin>>x;
	int ans=0;
	for(int i=0;ans*5+5<=x;i++)
	{
		ans+=1;
	}
	if(ans*5<x) ans++;
	cout<<ans;
	return 0;
}

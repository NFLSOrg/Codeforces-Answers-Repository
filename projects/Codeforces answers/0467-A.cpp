#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int p[100]={0},q[100]={0};
	for(int i=0;i<n;i++)
	{
		cin>>p[i]>>q[i];
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(p[i]+2<=q[i]) ans++;
	}
	cout<<ans;
	return 0;
}

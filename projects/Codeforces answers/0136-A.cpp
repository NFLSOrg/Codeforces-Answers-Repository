#include<iostream>
using namespace std;
int p[100]={0};
int ans[100]={0};
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(int i=0;i<n;i++)
	{
		ans[p[i]-1]=i+1;
	}
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}

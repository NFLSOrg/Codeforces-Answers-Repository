#include<iostream>
using namespace std;
int main()
{
	int n,h;
	cin>>n>>h;
	int ans=n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	} 
	
	for(int i=0;i<n;i++) 
	{ 
		if(a[i]>h) 
		{ 
			ans++;
		}
	} 
	cout<<ans;
	return 0;
}

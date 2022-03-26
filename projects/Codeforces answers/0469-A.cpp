#include<iostream>
using namespace std;
int a[100];
int main()
{
	int n;
	cin>>n;
	int p;
	cin>>p;
	for(int i=0;i<p;i++)
	{
		int t;
		cin>>t;
		a[t]++;
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		int t;
		cin>>t;
		a[t]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0)
		{
			cout<<"Oh, my keyboard!";
			return 0;
		}
	}
	cout<<"I become the guy.";
	return 0;
} 

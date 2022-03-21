#include<iostream>
using namespace std;
long long n;
int a[1000],b[1000];
int main()
{
	cin>>n;
	int t=0,ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		t+=b[i];
		t-=a[i];
		if(t>ans) ans=t;
	}
	cout<<ans;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.length();i++)
	{
		if(a[i]>64 && a[i]<91)
		{
			a[i]+=32;
		}
	}
	for(int i=0;i<b.length();i++)
	{
		if(b[i]>64 && b[i]<91)
		{
			b[i]+=32;
		}
	}
	if(a>b) 
	{
		cout<<1;
		return 0;
	}
	if(a<b)
	{
		cout<<-1;
		return 0;
	}
	cout<<0;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int big=0,sma=0;
	cin>>a;
	for(int i=0;i<a.length();i++)
	{
		if(a[i]<97) big++;
		else sma++;
	}
	if(big>sma)
	{
		for(int i=0;i<a.length();i++)
		{
			if(a[i]>=97) a[i]-=32;
		}
	}
	else
	{
		for(int i=0;i<a.length();i++)
		{
			if(a[i]<97) a[i]+=32;
		}
	}
	cout<<a;
	return 0;
}

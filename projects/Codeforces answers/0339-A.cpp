#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	cin>>a;
	if(a.length()==1)
	{
		cout<<a;
		return 0;
	}
	int b[3]={0};
	for(int i=0;i<a.length();i+=2)
	{
		if(a[i]=='1')
		{
			b[0]++;
		}
		if(a[i]=='2')
		{
			b[1]++;
		}
		if(a[i]=='3')
		{
			b[2]++;
		}
	}
	int c=0;
	int F=0;
	for(int i=0;i<b[0];i++)
	{
		if(F==1)
		{
			cout<<1;
			return 0;
		}
		c+=2;
		if(c+1==a.length())
		{
			F=1;
		}
		cout<<1<<"+";
	}
	for(int i=0;i<b[1];i++)
	{
		if(F==1)
		{
			cout<<2;
			return 0;
		}
		c+=2;
		if(c+1==a.length())
		{
			F=1;
		}
		cout<<2<<"+";
	}
	for(int i=0;i<b[2];i++)
	{
		if(F==1)
		{
			cout<<3;
			return 0;
		}
		c+=2;
		if(c+1==a.length())
		{
			F=1;
		}
		cout<<3<<"+";
	}
	return 0;
}

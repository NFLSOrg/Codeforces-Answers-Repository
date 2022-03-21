#include<iostream>
using namespace std;
bool check(int a)
{
	int s[10]={0};
	for(int i=0;i<4;i++)
	{
		int ss=a%10;
		s[ss]++;
		a/=10;	
	}	
	int F=1;
	for(int i=0;i<10;i++)
	{
		if(s[i]>1) F=0;
	}
	return(F==1?true:false);
} 
int main()
{
	int a;
	cin>>a;
	for(int i=a+1;i<20000;i++)
	{
		if(check(i)==1) 
		{
			cout<<i;
			return 0;
		}
	}
}

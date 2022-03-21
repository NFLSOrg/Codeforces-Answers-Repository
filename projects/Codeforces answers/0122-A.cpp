#include<iostream>
using namespace std;
bool islucky(int a)
{
	int is=1;
	if(a==0) is=0;
	while(a!=0 && is==1)
	{
		if(a%10!=4 && a%10!=7)
			is=0;
		a/=10;
	}
	return(is==1?true:false);
}
int main()
{
	int a,F=0;
	cin>>a;
	for(int i=4;i<=a;i++)
	{
		if(!islucky(i)) continue;
		if(a%i==0) F=1;
	}
	cout<<(F==1?"YES":"NO");
	return 0;
}

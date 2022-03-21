#include<iostream>
using namespace std;
int main()
{
	long long a;
	cin>>a;
	int tot=0;
	int F=1;
	while(a!=0)
	{
		int x=a%10;
		if(x==7 || x==4)
			tot++;
		a/=10;
	}
	if(tot==0) F=0;
	while(tot!=0 && F==1)
	{
		int x=tot%10;
		if(x!=4 && x!=7)
			F=0;
		tot/=10;
	}
	if(F==0) cout<<"NO";
	else cout<<"YES";
	return 0;
}

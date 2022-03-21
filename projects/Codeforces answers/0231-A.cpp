#include<iostream>
using namespace std;
int main()
{
	int a,tot=0;
	cin>>a;
	while(a--)
	{
		int b,c,d,sum=0;
		cin>>b>>c>>d;
		if(b==1) sum++;
		if(c==1) sum++;
		if(d==1) sum++;
		if(sum>=2) tot++;
	}
	cout<<tot;
	return 0;
}

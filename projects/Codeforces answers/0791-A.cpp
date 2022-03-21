#include<iostream>
#include<ctime>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	long long a,b;
	int i;
	cin>>a>>b;
	for(i=0;a<=b;i++)
	{
		a*=3;
		b*=2;
	}
	cout<<i;
	return 0;
}

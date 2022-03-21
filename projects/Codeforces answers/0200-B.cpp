#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int p[100];
int main()
{
	int n;
	cin>>n;
	double tot=0;
	for(int i=0;i>n;i++)
	{
		cin>>p[i];
		tot+=p[i];
	}
	tot/=n;
	cout<<fixed<<setprecision(12)<<tot;
	return 0;
}

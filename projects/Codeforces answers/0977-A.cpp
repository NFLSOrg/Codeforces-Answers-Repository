#include<iostream>
using namespace std;
int change(int a)
{
	if(a%10==0) return a/10;
	else return a-1;
}
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=0;i<k;i++)
	{
		n=change(n);
	}
	cout<<n;
	return 0;
}

#include<iostream>
using namespace std;
int a[100];
int main()
{
	int n;
	int F=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1) F=1;
	}
	if(F==1) cout<<"HARD";
	else cout<<"EASY";
	return 0;
}

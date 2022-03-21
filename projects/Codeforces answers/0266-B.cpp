#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,t;
	string a;
	cin>>n>>t>>a;
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]=='B'&&a[j+1]=='G')
			{
				swap(a[j],a[j+1]);
				j++;
			}
		}
	}
	cout<<a;
	return 0;
} 

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	int s=0;
	cin>>n;
	while(n--)
	{
		string a;
		cin>>a;
		if(a[1]=='+') s++;
		else if(a[1]=='-') s--;
	}
	cout<<s;
	return 0;
}

#include<iostream>
#include<ctime>
#include<cmath>
#include<string>
using namespace std;
char FAK(int a)
{
	return a;
}
int main()
{
	string a;
	cin>>a;
	if(a[0]<97) cout<<a[0];
	else
		cout<<FAK(a[0]-32);
	for(int i=1;i<a.length();i++)
	{
		cout<<a[i];
	}
	return 0;
}

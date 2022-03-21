#include<iostream>
#include<string>
using namespace std;
int main()
{
	int al;
	int d=0,a=0;
	cin>>al;
	string as;
	cin>>as;
	for(int i=0;i<as.length();i++)
	{
		if(as[i]=='A') a++;
		else if(as[i]=='D') d++;
	}
	if(a>d)
	{
		cout<<"Anton";
		return 0;
	}
	else if(a==d)
	{
		cout<<"Friendship";
		return 0;
	}
	cout<<"Danik";
	return 0;
}

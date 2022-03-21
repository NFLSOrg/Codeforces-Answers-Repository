#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int s=0;
	for(int i=0;i<a.length();i++)
	{
		if(s==0 && a[i]=='h') s=1;
		else if(s==1 && a[i]=='e') s=2;
		else if(s==2 && a[i]=='l') s=3;
		else if(s==3 && a[i]=='l') s=4;
		else if(s==4 && a[i]=='o')
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}

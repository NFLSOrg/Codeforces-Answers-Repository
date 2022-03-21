#include<iostream>
#include<ctime>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	string a;
	int sum=0;
	cin>>a;
	int b[26]={0};
	for(int i=0;i<a.length();i++)
	{
		b[a[i]-97]++;
	}
	for(int i=0;i<26;i++)
	{
		if(b[i]>=1) sum++;
	}
	if(sum%2==0)
	{
		cout<<"CHAT WITH HER!";
		return 0;
	}
	cout<<"IGNORE HIM!";
	return 0;
}

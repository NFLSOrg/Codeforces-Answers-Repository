#include<iostream>
#include<ctime>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	int ans=0;
	int a;
	cin>>a;
	int lst,now;    //lst1 red lst2 green lst3 blue
	string sb;
	cin>>sb;
	if(sb[0]=='R') lst=1;
	else if(sb[0]=='G') lst=2;
	else lst=3;
	for(int i=1;i<sb.length();i++)
	{
		if(sb[i]=='R') now=1;
		else if(sb[i]=='G') now=2;
		else now=3;
		if(now==lst) ans++;
		lst=now;
	}
	cout<<ans;
	return 0;
}

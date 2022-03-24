#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[4];
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	sort(a,a+4);
	int ans=0;
	if(a[0]==a[1]) ans++;
	if(a[1]==a[2]) ans++;
	if(a[2]==a[3]) ans++;
	cout<<ans;
	return 0;
} 

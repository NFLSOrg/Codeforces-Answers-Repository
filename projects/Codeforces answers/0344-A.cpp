#include<iostream>
using namespace std;
int ori[100000]={0};
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>ori[i];
	int lst=ori[0];
	int ans=1;
	for(int i=1;i<n;i++)
	{
		if(ori[i]!=lst) ans++; 
		lst=ori[i];
	}
	cout<<ans;
	return 0;
}

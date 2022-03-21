#include<iostream>
#include<cmath>
using namespace std;
int a[5][5];
int main()
{
	int ri,rj;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==1) 
			{
				ri=i;
				rj=j;
			}
		}
	}
	int ans=abs(ri-2)+abs(rj-2);
	cout<<ans;
	return 0;
}

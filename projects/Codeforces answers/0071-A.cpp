#include<string>
#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	while(a--)
	{
		string sb;
		cin>>sb;
		if(sb.length()>10)
		{
			cout<<sb[0]<<sb.length()-2<<sb[sb.length()-1]<<endl;	
		}
		else
		{
			cout<<sb<<endl;	
		}		
	} 
	return 0;
}

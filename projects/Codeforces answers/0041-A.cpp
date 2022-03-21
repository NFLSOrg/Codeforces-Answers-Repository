#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string a;
	string b;
	cin>>a>>b;
	reverse(b.begin(),b.begin()+b.length());
	if(b==a) cout<<"YES";
	else cout<<"NO";
	return 0;
}

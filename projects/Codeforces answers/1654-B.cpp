#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	int tc,sise,f;
	char c;
	cin>>tc;
	while(tc--){
		cin>>a;
		sise=a.size();
		for(int i=0;i<sise;i++){
			c=a[0];
			a.erase(0,1);
			f=a.find(c);
			if(f!=a.npos){}
			else{break;}
		}
		cout<<c<<a<<"\n";
	}
	return 0;
}

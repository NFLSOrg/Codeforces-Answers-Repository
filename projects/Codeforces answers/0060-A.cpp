#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int bs,hs,grt,smt,nm;
	string ht[4];
	cin>>bs>>hs;
	smt=bs+1,grt=0;
	while(hs--){
		for(int i=0;i<4;i++){
			cin>>ht[i];
		}
		cin>>nm;
		if(ht[2]=="right"){
			grt=max(nm,grt);
		}
		if(ht[2]=="left"){
			smt=min(smt,nm);
		}
	}
	if((smt-grt)<=1){cout<<-1;}
	else{cout<<smt-grt-1;}
	return 0;
}

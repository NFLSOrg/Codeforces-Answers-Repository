#include<iostream>
#include<cmath>
#include<string>
#define ll long long
using namespace std;
ll tkrld(ll n,ll th){
	ll thenum,theenum,hh,hhh;
	thenum=pow(10,th);
	theenum=pow(10,th-1);
	if(th==1){return n%10;}
	else{
		hh=n%thenum;
		hhh=n%theenum;
		return (hh-hhh)/theenum;
	}
}
ll tkdig(ll bet){
	ll digs=0;
	ll lops;
	if(bet==0){return 1;}
	for(lops=1;bet/lops>0;lops*=10){
		digs++;
	}
	return digs;
}
char NTC(ll number){
	number+=48;
	return number;
}
ll patch(ll bef,ll ori){
	ll ddiigg;
	ddiigg=tkdig(ori);
	ori+=pow(10,ddiigg)*bef;
	return ori;
}
string delzero(string b){
	ll i=0,sise=b.size();
	for(i=0;i<sise;i++){
		if(b[i]!='0'){break;}
	}
	return b.substr(i,sise);
}
bool ok(string str){
	ll len=str.size();
	for(ll i=0;i<len;i++){
		if(str[i]<48 || str[i]>57){
			return false;
		}
	}
	return true;
}
int main(){
	ll dig,tc,a,s,j=1,vari;
	string ans;
	cin>>tc;
	while(tc--){
		ans="";
		cin>>a>>s;
		j=1;
		dig=tkdig(s);
		for(ll i=1;i<=dig;i++){
			vari=tkrld(s,j)-tkrld(a,i);
			if(vari>=0){ans=NTC(vari)+ans;}
			else{
				j++;
				ll varri=patch(tkrld(s,j),tkrld(s,j-1));
				ll varry=varri-tkrld(a,i);
				ans=NTC(varry)+ans;
			}
			j++;
		}
		if(ok(ans)==false){cout<<-1<<"\n";continue;}
		cout<<delzero(ans)<<"\n";
	}
	return 0;
}

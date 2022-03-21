#include<iostream>
#include<string>
using namespace std;
int main(){
	int tc;
	cin>>tc;
	string a;
	while(tc--){
		int n,flag=0,m=0,t=0;
		cin>>n>>a;
		if(n==3 && a!="TMT"){flag=1;}//TMTTMT TMTMTT TTMTMT TTMMTT TTMTMTTMT TMMTTT 
		for(int i=0;i<a.size();i++){ //每个yes的样例 开头结尾都是T 每个M前面都有至少一个没有被其他M用过的T 
			if(a[i]=='T'){t++;}
			else{m++;}
			if(m>t){flag=1;}
		}
		m=0;
		t=0;
		for(int i=a.size()-1;i>=0;i--){
			if(a[i]=='T'){t++;}
			else{m++;}
			if(m>t){flag=1;}
		}
		if(m*2!=t){flag=1;}
		if(flag==1){cout<<"NO"<<"\n";}
		else{cout<<"YES"<<"\n";}
	}
}

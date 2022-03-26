#include<iostream>
#include<math.h>
using namespace std;
bool ip(int n){
	int sqr=sqrt(n);
	for(int i=2;i<=sqr;i++){
		if(n%i==0){return false;}
	}
	return true;
}
void out(int num,int b){
	for(int lop=0;lop<b;lop++){
		for(int lops=0;lops<b;lops++){
			if(lop==lops){cout<<num<<" ";}
			else{cout<<1<<" ";}
		}
		cout<<endl;
	}
}
int main(){
	int tc,a,tp;
	cin>>tc;
	while(tc--){
		cin>>a;
		if(ip(a)){
			out(1,a);
		}
		else{
			for(int k=a;;k++){
				if(ip(k) && !ip(1+k-a)){tp=1+k-a;break;}
			}
			out(tp,a);
		}
	}
	return 0;
}

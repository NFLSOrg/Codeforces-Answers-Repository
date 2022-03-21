#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long sq,mid,num,tc,sqq,hh,hhh;
	cin>>tc;
	while(tc--){
		cin>>num;//11
		sq=sqrt(num);
		if(sq*sq==num){cout<<sqrt(num)<<" "<<1<<endl;continue;}
		sq+=1;//3+1=4
		sqq=sq*sq;//16
		mid=sqq-(sq-1);//13
		hh=(sq-1)*(sq-1)+1;//10
		if(mid==num){cout<<sq<<" "<<sq<<endl;}
		if(mid<num){cout<<sq<<" "<<sq-(num-mid)<<endl;}
		if(mid>num){cout<<sq-(mid-num)<<" "<<sq<<endl;}
	}
}
/*
1  2  5  10
4  3  6  11
9  8  7  12
16 15 14 13
*/

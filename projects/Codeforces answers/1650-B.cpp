#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int tc,l,r,a,ans;
	cin>>tc;
	while(tc--){
		cin>>l>>r>>a;
		if(l==r){cout<<l/a+l%a<<"\n";continue;}    
		//have only one choice
		if(a==1 || r<a){cout<<r<<"\n";continue;}   
		//when a=1,r%a=0,r/a=r. when r<a,r%a=r,r/a=0. the output must be r
		if(r==a){cout<<r-1<<"\n";continue;}
		//when maximum value=a,the number chosen(x) must be less than a.if x=a,x/a=1,x%a=0,the value's to small.
		//so x<a. as x<a,x%a=x,x/a=0,so ans=x.if ans 
		if(r/a*a-1>=l){cout<<max(a+r/a-2,r/a+r%a)<<"\n";continue;}
		else{cout<<r/a+r%a<<"\n";continue;}
	}
	return 0;
}

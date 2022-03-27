#include<iostream>
using namespace std;
long long cal(long long asdf){
	return (1+asdf)*asdf/2;
}
long long a[100005];
int main(){
	int n;
	cin>>n;
	int num,i=0,lnum;
	long long l=1;
	for(int j=0;j<=n;j++){
		if(j!=n){cin>>num;}
		else{num=lnum+1;}
		if(j==0){lnum=num;continue;}
		if(num!=lnum){a[i]=l;l=1;i++;}
		else{l++;}
		lnum=num;
	}
	long long ans=0;
	for(int j=0;j<i;j++){
		ans+=cal(a[j]);
		//cout<<a[j]<<" ";
	}
	cout<<ans;
	return 0;
}

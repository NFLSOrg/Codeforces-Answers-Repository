#include<iostream>
#include<algorithm>
using namespace std;
long long a[1002];
int main(){
	int tc;
	long long n,m1=-1,m2=-1;
	cin>>tc;
	while(tc--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			m1=max(m1,a[i]);
		}
		for(int k=0;k<n;k++){
			if(a[k]==m1){a[k]=0;break;}
		}
		for(int j=0;j<n;j++){
			m2=max(m2,a[j]);
		}
		cout<<m1+m2<<endl;
		m1=-1,m2=-1;
	}
	return 0;
}

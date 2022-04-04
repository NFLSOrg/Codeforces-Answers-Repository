#include<iostream>
#include<set>
using namespace std;
set<int>st;
int ans[100005],arr[100005]; 
int main(){
	int n,m,a;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=n-1;i>=0;i--){
		st.insert(arr[i]);
		ans[i]=st.size();
	}
	while(m--){
		cin>>a;
		cout<<ans[a-1]<<"\n";
	}
	return 0;
}

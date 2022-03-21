#include<iostream>
using namespace std;
int pos[101],targ[101];
int main(){
	int ls,dis;
	cin>>ls;
	for(int i=0;i<ls;i++){
		cin>>pos[i]>>dis;
		targ[i]=pos[i]+dis;
	}
	for(int n=0;n<ls;n++){
		for(int m=0;m<n;m++){
			if(targ[n]==pos[m]){
				if(targ[m]==pos[n]){
					cout<<"YES";return 0;
				}
			}
		}
	}
	cout<<"NO";
	return 0;
}

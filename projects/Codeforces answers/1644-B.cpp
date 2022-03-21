#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
void triout(){
	cout<<"1 3 2\n";
	cout<<"3 2 1\n";
	cout<<"3 1 2\n";
}
/*
1 3 2 4
4 1 3 2
2 4 1 3
3 2 4 1

1 3 2 4 5
5 1 3 2 4
4 5 1 3 2
2 4 5 1 3
3 2 4 5 1
*/
int arr[52];
void nextpermu(int len){
	int temp=arr[0];
	arr[0]=arr[len-1];
	for(int m=len-1;m>0;m--){
		arr[m]=arr[m-1];
	}
	arr[1]=temp;
}
int main(){
	int n,tc,i,j,k;
	cin>>tc;
	while(tc--){
		memset(arr,0,sizeof(arr));
		arr[0]=1,arr[1]=3,arr[2]=2;
		cin>>n;
		if(n==3){triout();continue;}
		for(i=3;i<n;i++){
			arr[i]=i+1;
		}
		for(k=0;k<n;k++){
			for(j=0;j<n;j++){cout<<arr[j]<<" ";}
			cout<<"\n";
			nextpermu(n);
		}
	}
	return 0;
}

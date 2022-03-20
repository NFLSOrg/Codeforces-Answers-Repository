#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
char itC(int inte){
	string alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	return alphabet[inte];
}
int Cti(char C){
	string alphbeta="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	return alphbeta.find(C);
}
string change(int it){
	string ret="";
	while(it!=0){
		ret=itC(it-1%26)+ret;
		it/=26;
	}
	return ret;
}
int cti(char c){
	string nums="0123456789";
	return nums.find(c);
}
void ott(string str1){
	int len1=str1.size(),i=1,n=0;
	while(str1[i]!='C'){
		i++;
	}
	i++;
	string num=str1.substr(1,i-2);
	for(;i<len1;i++){
		n=n*10+cti(str1[i]);
	}
	cout<<change(n)<<num<<"\n";
}
int power(int bas,int zhi){
	int retr=1;
	while(zhi--){
		retr*=bas;
	}
	return retr;
}
int change2(string str){
	int lens=str.size(),ret2=0,p=0;
	for(int k=lens;k--;k>=0){
		ret2+=power(26,p)*Cti(str[k]);
		p++;
	}
	return ret2;
}
void tto(string str2){
	int len2=str2.size(),m=0;
	while(str2[m]>'9'){
		m++;
	}
	cout<<'R'<<str2.substr(m,len2-m)<<'C';
	cout<<change2(str2.substr(0,m))<<"\n";
}
int main(){
	int tc;
	string a;
	cin>>tc;
	while(tc--){
		cin>>a;
		if(a[0]=='R' && a[1]<65){
			ott(a);
		}
		else{tto(a);}
	}
	return 0;
}

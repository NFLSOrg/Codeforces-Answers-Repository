#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
string str1,ret;
int sise,len,i;
bool flag=false;
string deal(string dt){
	sise=dt.size();
	for(int l=0;l<sise;l++){
		if(dt[l]>'1'){flag=true;}
		if(flag){dt[l]++;}
	}
	flag=false;
	for(int k=0;k<sise;k++){
		if(dt[k]>'1'){dt[k]='1';}
	}
	return dt;
}
int charint(char a){
	int b=a;
	return b-48;
}
long long toi(string str){
	len=str.size();
	long long ret2=0;
	for(i=0;i<len;i++){
		ret2+=charint(str[i]);
		ret2*=10;
	}
	return ret2/10;
}
char toc(int n){
	return (char)(n+48);
}
string tostr(long long num){
	ret="";
	for(i=0;num>0;i++){
		ret+=toc(num%10);
		num/=10;
	}
	reverse(ret.begin(),ret.end());
	return ret;
}
int con(string str2){
	int sise2=str2.size();
	int retu=0,nn=0;
	for(int j=sise2-1;j>=0;j--){
		retu+=charint(str2[j])*pow(2,nn);
		nn++;
	}
	return retu;
}
int main(){
	int n;
	cin>>n;
	int result=toi(deal(tostr(n)));//312410141
	//cout<<result<<"\n";
	cout<<con(tostr(result));
	return 0;
}

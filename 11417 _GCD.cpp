#include<iostream>
#include<stdio.h>
using namespace std;
int gcd(int n1,int n2);
main(){
	int n,g=0,i,j;
	while(scanf("%d",&n)!=EOF){
		if(n==0)
		break;
		g=0;
		for( i=1;i<n;i++){
			for( j=i+1;j<=n;j++){
				g+=gcd(i,j);
			}
		}
		cout<<g<<endl;
	}
	
}
int gcd(int n1,int n2){
	while(n1!=n2){
		if(n1>n2){
		n1=n1-n2;
		}else{
			n2=n2-n1;
		}
	}
	return n2;
}

#include<iostream>
#include<stdio.h>
using namespace std;
main(){
	int a,b, sum=0;
	
	while(scanf("%d %d",&a,&b)!=EOF){
		sum=a*(b*2);
		cout<<sum<<endl;
	}
	return 0;
	
}

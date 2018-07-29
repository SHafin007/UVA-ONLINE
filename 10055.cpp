#include<iostream>
#include<stdio.h>
#include <stdlib.h> 
using namespace std;
main(){
	long long int a,b;
	while(scanf("%lld %lld",&a,&b)!=EOF){
		long long int sum;
		sum=abs(a-b);
		cout<<sum<<endl;
	}
	return 0;
}

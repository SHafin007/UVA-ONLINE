#include<iostream>
#include<stdio.h>
using namespace std;
long long mode(long long a,long long b,long long  m){
	if(b==0){
	return 1;
}else if(b%2==0){
	int y=mode(a,b/2,m);
	return (y*y)%m;
}else{
	return ((a%m)*mode(a,b-1,m))%m;
}
	
}
main(){
	long long a,b,m;
	
	while(scanf("%lld %lld %d",&a,&b,&m)!=EOF){
	
	
	int x=mode(a,b,m);
	cout<<x<<endl;
}
return 0;
}

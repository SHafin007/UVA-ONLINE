#include<iostream>
#include<stdio.h>
using namespace std;

main(){
	int a,b,c;
	while(scanf("%d",&a)!=EOF){
		for(int i=0;i<a;i++){
			cin>>b>>c;
			if(b<c){
				cout<<"<"<<endl;
			}else if(b>c){
				cout<<">"<<endl;
			}else{
				cout<<"="<<endl;
			}
		}
	}
	return 0;
}

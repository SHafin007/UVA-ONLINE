#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	cin>>n;
	int a,b,c;

	for(int i=1;i<=n;i++){
		cin>>a>>b>>c;
		
		if((a>b && a<c) || (a<b && a>c)){
			cout<<"Case "<<i<<": "<<a<<endl;
		}else if((b>a && b<c) || (b<a && b>c)){
			cout<<"Case "<<i<<": "<<b<<endl;
		}else{
			cout<<"Case "<<i<<": "<<c<<endl;
		}
		
	}		
}


	

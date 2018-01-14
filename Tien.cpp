#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main(){
	ll a,b,n=1;
	cin>>a>>b;
	if(a==b){
		cout<<1;
		return 0;
	}
	if(b-a>=10){
		cout<<0;
	}else{
		a=a%10;
		b=b%10;
		if(a>=b){
			cout<<0;
		}else{
			for(int i=a+1;i<=b;i++){
				n=n*i;
			}
			cout<<n%10;
		}
	}
	
}



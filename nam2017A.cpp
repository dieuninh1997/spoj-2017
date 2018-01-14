#include <bits/stdc++.h>
using namespace std;
int dao(int a){
	int x=0;
	while(a!=0){
		x=x*10+a%10;
		a=a/10;
	}
	return x;
}
void solve(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		int dem=0;
		while(x!=1){
			if(dao(x)<x&&x%10!=0){
				x=dao(x);
			}else{
				x--;
			}
//			cout<<x<<endl;
			dem++;
		}
		cout<<dem<<endl;
	}
}
 int main()
{
//	freopen("input.txt","r",stdin);
	solve();
	return 0;
}

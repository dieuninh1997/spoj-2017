#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	ll a,b;
	cin>>a>>b;
	ll f1=1;
	if(b==a)
	{
		cout<<1;
	}else
	{
	for(int i=b; i>a;i--)
	{
		f1=(f1%10)*(i%10);
		if(f1==0)
			break;
	}	
	cout<<f1%10;
	}	
}
int main()
{
	solve();
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)


void solve()
{
	int n;
	cin>>n;
	ll fac=1, mod=1000000007;
	for(int i=2; i<=n;i++)
	{
		fac=(fac%mod*i%mod)%mod;
	}
	cout<<fac;	
}
int main()
{
	solve();
	return 0;
}


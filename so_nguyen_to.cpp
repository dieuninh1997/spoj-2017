#include<bits/stdc++.h>
using namespace std;
typedef long long int ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
ll pm(ll a, ll e, ll m) {
	if (m==1) return 0;
	if (!e) return 1;
	ll t = 1;
	while (e > 1) {
		if (e&1) t = t*a%m;
		a = a*a%m;
		e >>= 1;
	}
	return t*a%m;
}
void solve()
{
	ll a,b;
	cin>>a>>b;
	printf("%03d",pm(a,b,1000));
	
}
int main()
{
	solve();
	return 0;
}


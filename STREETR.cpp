#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n;
	cin>>n;
	ll a[n];
	for(int i=0; i<n;i++)
		cin>>a[i];	
	ll d1=a[1]-a[0], d2, dem=0;
	for(int i=2; i<n;i++)
	{
		d2=a[i]-a[i-1];
		d1=__gcd(d1,d2);
	}
	for(int i=1; i<n;i++)
	{
		dem+=((a[i]-a[i-1])/d1)-1;
	}
	cout<<dem;

}
int main()
{
	solve();
	return 0;
}


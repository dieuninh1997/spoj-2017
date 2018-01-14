#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	ll t1=abs((a+b)-(c+d));
	ll t2=abs((a+c)-(b+d));
	ll t3=abs((a+d)-(c+b));
	cout<<min(t3,min(t1,t2));
}
int main()
{
	solve();
	return 0;
}


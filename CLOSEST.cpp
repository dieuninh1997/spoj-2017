#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n,m;
	cin>>n>>m;
	ll c1,c2;
	cin>>c1>>c2;
	ll a[n], b[m];
	for(int i=0; i<n;i++)
		cin>>a[i];
	
	for(int i=0; i<m;i++)
		cin>>b[i];

	int _min=0, dem=0; 
	vector<ll> v;
	
	for(int i=0;  i<n;i++)
	{
		for(int j=0; j<m;j++)
		{
			ll d=abs(a[i]-b[j]);
			if(i==0 && j==0)
			{
				_min=d;
			}
			if(d<=_min)
			{	
				_min=d;
				v.push_back(_min);
			}
		}
	}
	sort(v.begin(),v.end());
	int si=v.size();
	for(int i=0; i<si;i++)
	{
		if(v[i]==_min)
			dem++;
		else
			break;
	}
	cout<<_min+abs(c1-c2)<<" "<<dem;
}
int main()
{
	solve();
	return 0;
}


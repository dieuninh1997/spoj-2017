#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n,m;
	cin>>n>>m;
	ll a[n][m];
	ll mh[n],mc[m];
	int t=0;
	set<ll> s;
	ll tong=0;
	ll _maxh=0, _maxc=0;
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<m;j++)
		{
			cin>>a[i][j];
			tong+=a[i][j];
			if(j==0)
				_maxh=a[i][j];
			if(a[i][j]>_maxh)
			{
				_maxh=a[i][j];
			}
		}
		s.insert(_maxh);
	}
	//cot
	int k=0;
	for(int j=0; j<m;j++)
	{
		for(int i=0; i<n;i++)
		{
			if(i==0)
				_maxc=a[i][j];
			if(a[i][j]>_maxc)
			{
				_maxc=a[i][j];
			}
		}
		s.insert(_maxc);
	}
	
	set <ll> :: iterator itr;
	for (itr = s.begin(); itr != s.end(); ++itr)
    {
        tong-=*itr;
    }
    cout<<tong;
}
int main()
{
	solve();
	return 0;
}


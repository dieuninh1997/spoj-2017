#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

int n;
ll m,a[100000];

ll f(ll i, ll n, ll h)
{
	ll dau=i, cuoi=n, giua, dem=0;
	while(dau<=cuoi)
	{
		giua=(dau+cuoi)/2;
		if(a[giua]<=h)
		{
			dau=giua+1;
			dem++;
		}else
		{
			return dem;
		}
//		cout<<"d="<<dau<<" c="<<cuoi<<" g="<<giua<<" h="<<h<<" dem="<<dem<<"\n";
	}
	return 0;
}

void solve()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		cin>>n>>m;
		for(int i=0; i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		
		ll kq,s=0;
		for(ll i=0; i<n-1; i++)
		{
			s+=f(i+1,n,m-a[i]);
			
		}
		cout<<s<<endl;
	}
}



int main()
{
	solve();
	return 0;
}


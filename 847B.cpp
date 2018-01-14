#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
#include <sstream>

  
bool desc(ll a[], ll n)
{
	for(int i=0; i<n-1;i++)
	{
		if(a[i]<a[i+1])
			return false;
	}
	return true;
}


void xuat(ll a[], ll n, int f)
{
	
	for(int i=0; i<n;i++)
		if(f)
			cout<<a[i]<<" ";
		else
			cout<<a[i]<<endl;
}

void solve()
{
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0; i<n;i++)
	{
		cin>>a[i];
	}
	if(desc(a,n))
	{
		xuat(a,n,0);
	}else
	{
		vector<ll> v;
		cout<<a[0]<<" ";
		for(ll i=0; i<n-1;i++)
		{
			if(a[i+1]>a[i])
			{
				cout<<a[i+1]<<" ";
			}else
			{
				v.push_back(i+1); 
			}
		}
		cout<<endl;
		ll l=v.size();
		for(ll i=0;i<l;i++)
		{
			cout<<a[v[i]]<<" ";
		}
	}
}
int main()
{
	solve();
	return 0;
}


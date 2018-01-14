#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n,k;
	cin>>n>>k;
	map<int, int> m;
	for(int i=0; i<n;i++)
	{
		int x;
		cin>>x;
		m[x]++;
	}
	int res=0;
	map<int,int>::iterator it,a;
	for(it=m.begin(); it!=m.end();it++)
	{
		a=m.find(it->first+k);
		if(a!=m.end())
			res+=a->second;
	}
	cout<<res;
}
int main()
{
	solve();
	return 0;
}


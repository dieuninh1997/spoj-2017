#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n,k,x;
	cin>>n>>k>>x;
	int s=0,a[n];
	for(int i=0; i<n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	int j=0;
	for(int i=n-1,j=k;j>0 ;i--)
	{
		s-=a[i];
		j--;
	}
	cout<<s+k*x;
}
int main()
{
	solve();
	return 0;
}


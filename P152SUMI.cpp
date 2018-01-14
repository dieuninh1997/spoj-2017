#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	string s;
	cin>>s;
	int n=s.length();
	int a[n];
	a[0]=0;
	for(int i=0; i<n-1;i++)
	{
		a[i+1]=((s[i]==s[i+1])?a[i]+1:a[i]);
	}
	
	int m;
	cin>>m;
	
	for(int i=0; i<m;i++)
	{
		int l,r;
		cin>>l>>r;
		cout<<a[r-1]-a[l-1]<<endl;
	}
	
}
int main()
{
	solve();
	return 0;
}


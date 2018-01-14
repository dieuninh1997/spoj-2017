#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n,m;
	cin>>n>>m;
	int a[n+1];
	int b[m+1];
	for(int i=0; i<n+1;i++)
		cin>>a[i];
	
	for(int i=0; i<m+1;i++)
		cin>>b[i];
	
	//gh vcl toi gian ve bac cao nhat
	if(n<m)
	{
		cout<<"0/1";
	}
	else if(n>m)
	{
		if(a[0]*b[0] <0)
			cout<<"-";
			
		cout<<"Infinity";
	}
	else
	{
		int u=__gcd(a[0],b[0]);
		cout<<a[0]/u<<"/"<<b[0]/u;
		
	}
	
	
	
	
}
int main()
{
	solve();
	return 0;
}


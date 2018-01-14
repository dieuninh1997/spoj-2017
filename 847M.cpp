#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

bool progress(int a[], int n)
{
	int v=a[1]-a[0];
	for(int i=1; i<n-1;i++)
	{
		
		if(a[i+1]-a[i]!=v)
			return false;		
	}
	return true;
}

void solve()
{

	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n;i++)
	{
		cin>>a[i];
	}
	if(progress(a,n))
		cout<<a[n-1]+(a[1]-a[0]);
	else
	{
		cout<<a[n-1];
	}
}
int main()
{
	solve();
	return 0;
}


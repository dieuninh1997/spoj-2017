#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n;
	cin>>n;
	string a[n];
	for(int i=0; i<n;i++)
	{
		cin>>a[i];
	}
	int f=0;
	for(int i=0; i<n; i++)
	{
		f=0;
		for(int j=0; j<=i;j++)
		{
			if(a[i]==a[j]&&j<i)
			{
				f=1;
				break;	
			}	
		}
		if(f)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
int main()
{
	solve();
	return 0;
}


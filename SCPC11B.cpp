#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n;
	cin>>n;
	while(n)
	{
		int a[n];
		for(int i=0; i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		bool check=true;
		for(int i=0; i<n-1;i++)
		{
			if(a[i+1]-a[i]>200)
			{
				check=false;
				break;
			}
		}
		if(check && (2*(1422-a[n-1])<=200))	
			cout<<"POSSIBLE\n";
		else 
			cout<<"IMPOSSIBLE\n";
		cin>>n;
	}
}
int main()
{
	solve();
	return 0;
}


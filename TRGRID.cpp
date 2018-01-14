#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		if(n<=m)
		{
			if(n%2==0)
				cout<<"L";
			else
				cout<<"R";
		}else
		{
			if(m%2==0)
				cout<<"U";
			else
				cout<<"D";
		}
		cout<<endl;
	}
}
int main()
{
	solve();
	return 0;
}


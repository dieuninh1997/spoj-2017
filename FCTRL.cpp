#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	//10=2*5
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int dem=0;
		while(n>=5)
		{
			dem+=n/5;
			n/=5;	
		}
		cout<<dem<<endl;
	}
}
int main()
{
	solve();
	return 0;
}


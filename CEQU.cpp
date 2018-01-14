#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int t,a,b,c,caseNo=0;
	cin>>t;
	while(t--)
	{
		caseNo++;
		cin>>a>>b>>c;
		int uc=__gcd(a,b);
		if(c%uc)
		{
			cout<<"Case "<<caseNo<<": No\n";
		}else
		{
			cout<<"Case "<<caseNo<<": Yes\n";
		}
		
	}

}
int main()
{
	solve();
	return 0;
}


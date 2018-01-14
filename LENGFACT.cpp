#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		if(n<3)cout<<1<<endl;
		else
		{
			//stirling's formula for n!		
			cout<<(ll)((double)n*log10(n/M_E) + 0.5*log10(2*M_PI*n))+1<<endl;
		}
	}
}
int main()
{
	solve();
//cout<<M_E;
	return 0;
}


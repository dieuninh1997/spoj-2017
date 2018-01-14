#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n;
	cin>>n;
	int p[n];
	double res=0;
	for(int i=0 ;i<n;i++)
	{
		cin>>p[i];
		res+=(p[i]/100.0);
	}
	printf("%.12f",100*res/n);
	
}
int main()
{
	solve();
	return 0;
}


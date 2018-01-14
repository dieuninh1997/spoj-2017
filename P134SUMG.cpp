#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n;
	int chua=1,cay=0, _min=1000000000;
	pair<int,int> p[n];
	cin>>n;
	for(int i=0; i<n;i++)
	{
		int ch,ca;
		cin>>ch>>ca;
		p[i]=make_pair(ch,ca);
	}
	if(n==1)
	{
		cout<<abs(p[i].first-p[i].second);
	}else
	{
		
	}

	

}
int main()
{
	solve();
	return 0;
}



#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n,q;
	cin>>n>>q;
	vector<int>a;
	vector<pair<int,int> > b;
	for(int i=0; i<n;i++)
	{
		int x;
		cin>>x;
		a.push_back(x);
		b.push_back(make_pair(x,i));
	}
	sort(b.begin(), b.end());
	for(int i=0; i<b.size();i++)
		cout<<b[i].first<<" "<<b[i].second<<endl;
	
}
int main()
{
	solve();
	return 0;
}


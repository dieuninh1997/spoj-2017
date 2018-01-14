#include <bits/stdc++.h>

#define _for(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define _fod(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()
#define __(v) memset(v,0,sizeof(v))
#define fi first
#define se second
#define arrayin(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define arrayout(a,n) for(int i=0;i<n;i++) cout<<a[i]<<" ";cout<<"\n";

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}
/*
n dinh, m canh => ktra co phai la cay ko?
-cay la 1 do thi lien thong va ko co chu trinh nao
cay co n dinh thi co dung n-1 canh
-sd dfs


*/
const int MAX=10001;
vector<int> g[MAX];
bool visit[MAX];
int n,m,cycle;
void dfs(int u, int prev)
{
	if(visit[u])
	{
		cycle=1;
		return;//ktra xem co chu trinh ko
	}
	visit[u]=true;
	for(int i=0; i<g[u].size();i++)
	{
		int v=g[u][i];
		if(v!=prev)
			dfs(v,u);
	}
}

void solve() {
	cin>>n>>m;
	cycle=0;
	for(int i=0; i<MAX;i++)
	{
		g[i].clear();
		visit[i]=false;
	}

	for(int i=0; i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(1,1);
	for(int i=1; i<=n;i++)
	{
		if(visit[i]==false)
			cycle=1;
	}
	if(cycle)
		cout<<"NO";
	else cout<<"YES";
}
int main(){
	#if NINH
//	freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}


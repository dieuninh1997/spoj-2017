#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a),_b_=(b); i<_b_;i++)
#define REF(i,a,b) for(int i=(a),_b_=(b); i>_b_;i--)
#define IT(i,v) for(typeof((v).begin()) i=(v).begin(); i!=(v).end();++i)
#define ALL(v) v.begin(), v.end()
#define MS(v) memset(v,0,sizeof(v))
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator +=(vector<T>&v, T x){v.push_back(x);return x;}

#define MAX 1001
int lca(int a, int b, int *height, int *parent, int n)
{
	if(height[a]>height[b])
	{
		swap(a,b);
	}
	int pa=a, pb=b;
	while(height[pa]!=height[pb])
	{
		pb=parent[b];
	}
	if(pa==pb)
		return pa;
	while(parent[pa]!=parent[pb])
	{
		pa=parent[pa];
		pb=parent[pb];
	}
	if(parent[pa]==0)
		return pa;
	else
		return parent[pa];
}
void solve(){
	int t;
	cin>>t;
	FOR(case_no,1,t+1)
	{
		cout<<"Case #"<<case_no<<": ";
		int n;
		cin>>n;
		int *height, *parent;
		height=new int[n+1];
		parent=new int[n+1];
		memset(height,0,sizeof height);
		memset(parent,0,sizeof parent);
		
		for(int i=1;i<=n;i++)
		{
			int u,v;
			cin>>u>>v;
			parent[u]=v;
		}
		int q;
		cin>>q;
		while(q--)
		{
			int a,b;
			cin>>a>>b;
			cout<<lca(a,b,n)<<endl;
		}
	}
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}




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
http://www.geeksforgeeks.org/prefix-sum-array-implementation-applications-competitive-programming/

*/
void solve() {
	int t;
	cin>>t;
	while(t--)
	{
	
	int n,u;
	cin>>n>>u;
	int a[n];
	int b[n+1]={0};
	int l,r,v,dem=0;
	for(int i=0; i<u;i++)
	{
		cin>>l>>r>>v;
		b[l]+=v;
		b[r+1]-=v;
	}
	for(int i=0; i<n;i++)
	{
		dem+=b[i];
		a[i]=dem;
	}
	int q;
	cin>>q;
	for(int i=0; i<q;i++)
	{
		int x;
		cin>>x;
		cout<<a[x]<<endl;
	}
}
	/*
	0 0 0 0 0 0
	0 1 7 => 7 0 -7 0  0  0
	2 4 6 => 7 0 -1 0  0 -6
	1 3 2 => 7 2 -1 0 -2 -6
	
	 7 2 -1 0 -2 -6
	 dem=7 =>a0=7
	 dem=9 => a1=9
	 dem=8 => a2=8
	 dem=8 =>a3=8
	 dem=6 =>a4=6
	 dem=0
	
	5 3
	0 0 0 0 0
	0 1 7 => 7 7 0 0 0
	2 4 6 => 7 7 6 6 6
	1 3 2 => 7 7+2 6+2 2+6 6 => 7 9 8 8 6
	3
	0 => 7
	3 => 8
	4 => 6
	
	
	*/
}
int main(){
	#if NINH
	freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}


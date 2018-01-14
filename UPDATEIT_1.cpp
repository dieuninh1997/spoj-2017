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

void solve() {
	//mang n phan tu khoi tao 0
	//tang them gia tri cac phan tu trong [l,r] mot luong val
	//sau u lan update thi co q cau truy van
	// in ra gtr cau truy van o index 

	int t;
	cin>>t;
	while(t--)
	{
		int n,u;
		cin>>n>>u;
		int a[n];
		for(int i=0; i<n;i++)
			cin>>a[i];
		for(int i=0; i<u;i++)
		{
			int l,r,val;
			cin>>l>>r>>val;
			
		}
	}
}
int main(){
	#ifdef NINH
	freopen("input.txt","r",stdin);
	#endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	solve();
	return 0;
}


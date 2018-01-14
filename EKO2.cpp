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
int a[1000000];

void solve() {
	int n,i;
	LL m;
	cin>>n>>m;
	for(i=0; i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	LL s=m;
	for(i=n-1;;i--)
	{
		s-=(a[i]-a[i-1])*(n-i);
		if(s<=0)break;
	}
	cout<<a[i-1]+(-s)/(n-i);
}
int main(){
	#if NINH
	//sd bin search
	freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}


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
		LL n, m;
		cin>>n>>m;
		if(n%2!=0||n>m|| m%2!=0)
		{
			cout<<"IMPOSSIBLE\n";
		}else
		{
			/*
				x: ho, y: dd
				2x+2y=n
				4x+2y=m
			*/
			LL D=2*2-4*2;
			LL Dx=n*2-2*m;
			LL Dy=2*m-4*n;
			LL a=Dx/D;
			LL b=Dy/D;
			if(a<0||b<0)
				cout<<"IMPOSSIBLE\n";
			else
				cout<<a<<" "<<b<<endl;
		}

}
int main(){
	#ifdef NINH
//	freopen("input.txt","r",stdin);
	#endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	solve();
	return 0;
}


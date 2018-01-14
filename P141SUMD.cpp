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
const int N = 4e5;
int a[N+1];
int b[N+1];
void solve() {
	int n,k;
	cin>>n>>k;
	int t=0;
	for(int i=0; i<n;i++)
	{
		cin>>a[i];
		b[t++]=a[i];
	}
	sort(b,b+n);
	//unique bo trung trong doan [a, b) sx va tra ve vi tri dau tien trung
	t=unique(b,b+t)-b-1;
	
}
int main(){
	solve();
	return 0;
}


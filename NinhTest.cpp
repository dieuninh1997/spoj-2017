#include <bits/stdc++.h>
#define _for(i,a,b) for (int i=(a),_b_=(b),_d_=(a<b?1:-1);i!=_b_;i+=_d_)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

void solve()
{
	int a,b;
	cin>>a>>b;
	cout<<a+b;
}
int main()
{
	#if me
	freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}



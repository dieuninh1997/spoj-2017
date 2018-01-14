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
typedef long long ll;
typedef unsigned long long ull;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

ll cut(vector<ll> &v, ll h)
{
	ll s=0;
	ll _size=v.size();
	for(int i=0; i<_size; i++)
	{
		if(v[i]>h)
			s+=v[i]-h;
	}
	return s;
}

ll bin_search(vector<ll> &v, ll x)
{
	ll low=0, mid, high=LLONG_MAX/10;
	ll r=LLONG_MIN;
	while(low<high)
	{
		mid=(low+high)>>1;
		ll w=cut(v,mid);
		if(w>=x)
		{
			low=mid+1;
			r=max(r,mid);
		}else
		{
			high=mid;
		}
	}
	return r;
}
void solve() {

	ll n,m;
	cin>>n>>m;
	vector<ll> v(n);
	for(int i=0; i<n;i++)
		cin>>v[i];
	cout<<bin_search(v,m);

}
int main(){
	#if NINH
	//sd bin search
	freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}


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
int convert(int n,int he)
{
	int ans=0;
	vector<int>v;
	while(n>0)
	{
		v.push_back(n%he);
		n/=he;
	}
	int len=v.size();
	_for(i,0,len)
		ans+=v[i];
	return ans;
}
void solve() {
	int t;
	cin>>t;
	_for(k,1,t+1)
	{
		int n;
		cin>>n;
		int s=0;
		_for(i,2,n)
			s+=convert(n,i);
		
		int mau=n-2;
		int uc=__gcd(s,mau);
		cout<<"Case #"<<k<<": "<<s/uc<<"/"<<(mau/uc)<<endl;
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


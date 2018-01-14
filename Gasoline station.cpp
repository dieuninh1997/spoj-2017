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
	int t;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		int n;
		string r;
		cin>>n>>r;
		int len=r.length();
		for(int i=0; i<len;i++)
		{
			if(r[i]=='R')
				n-=3;
			else
			{
				n-=2;
				if(i>0&&r[i]=='F'&&r[i-1]=='F')
				{
					n++;
				}
			}
		}
		cout<<"Case #"<<k<<": ";
		if(n>=0)
			cout<<"0\n";
		else
			cout<<abs(n)<<endl;
	}
}
int main(){
	#ifdef NINH
	freopen("a1.txt","r",stdin);
	#endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	solve();
	return 0;
}


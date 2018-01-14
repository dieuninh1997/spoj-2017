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
	a[0]=a[1]=0
	n>1
	a[n]=a[n-1]+f(n)
	f(n) so ngto nho nhat cua n
*/
int prime[10000001];
LL ans[10000001];


void f()
{
	memset(prime,0,sizeof prime);
	memset(ans,0,sizeof ans);
	for(int i=2; i<=10000000;i++)
	{
		if(!prime[i])
		{
			for(int j=i; j<10000000;j+=i)
			{
				if(!prime[j])
					prime[j]=i;
			
			}		
		}
	}
	for(int i=2;i<=10000000;i++)
		ans[i] = ans[i-1] + prime[i];
}

void solve() {
	f();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<ans[n]<<endl;
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


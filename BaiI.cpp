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
int a[300000];
void solve() {
	int n;
	cin>>n;
	for(int i=0; i<n;i++)
	{
		cin>>a[i];
	}
	LL s=0;
	LL res=LLONG_MIN;
	int j;
	for(int i=3; i<n;i++)
	{
		s=a[i-1]+a[i-2]+a[i-3];
		for(j=0; j<3;j++)
		{
		
			s+=a[i+j];
			cout<<"+a["<<i+j<<"]="<<a[i+j]<<endl;
		}
		res=max(s,res);		
		cout<<" len="<<(j+i-3)<<" res="<<res<<" s="<<s<<endl;	
	
	}
}
int main(){
	#ifdef NINH
//	freopen("tesst.txt","r",stdin);
	#endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	solve();
	return 0;
}


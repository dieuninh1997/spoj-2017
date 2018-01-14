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
struct doctor{
	int s;
	int d;
	//int t=0;
}a[1000];
void solve() {
	int n;
	cin>>n;
	int temp, _m=-1;
	map<int,int> m_s,m_d;
	for(int i=0; i<n;i++)
	{
		cin>>a[i].s>>a[i].d;
		if(i>0 && a[i].s<a[i-1].s)
		{
			m_s[a[i].s]++;
		}
		temp=a[i].s+m_s[a[i].s]*a[i].d;	
		//cout<<a[i].s<<" "<<a[i].d<<" "<<m_s[a[i].s]<<" ";
		_m=max(_m,temp);
		m_s[a[i].s]++;
		//cout<<_m<<endl;
	}
	cout<<_m;
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


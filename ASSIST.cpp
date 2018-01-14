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

const int MAX =34000;
void solve() {
	vector<int> v;
	vector<bool> check(MAX,false);
	for(int i=2;i<=MAX;i++)
	{
		if(!check[i])
		{
			int t=0;
			for(int j=i+1; j<=MAX;j++)
			{
				if(!check[j])
				{
					t++;
				}
				if(t==i)
				{
					check[j]=true;
					t=0;
				}
			}
		}
	}
	for(int i=2;i<=MAX;i++)
		if(!check[i])
			v.push_back(i);
	
	int n;
	while(cin>>n && n!=0)
	{
		cout<<v[n-1]<<endl;
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


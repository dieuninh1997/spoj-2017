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
#define rep(i, n) for(int i = 0; i < (n); i++)

void solve() {
	int t;
	cin>>t;
	while(t--)
	{
	
		int n,m; 
		cin >> m >> n;
    	long f[51][1001] = {0}, temp;
    	int w[51], v[51] ;
    
    	for (int i =1; i<=n; i++)
		{ 
			cin >> w[i] >> v[i];
		}

    	for (int i=1; i<=n; i++) 
		{
        	for (int j = 0; j<=m; j++) 
			{
            	if (j<w[i]) 
					temp = 0;
				else 
					temp =f[i-1][j-w[i]] + v[i];
            f[i][j] = max(temp, f[i-1][j]);
        	}
    	}
    	cout <<"Hey stupid robber, you can get "<< f[n][m]  <<"."<<endl;
	}
}
int main(){
	#ifdef NINH
	freopen("a.txt","r",stdin);
	#endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	solve();
	return 0;
}


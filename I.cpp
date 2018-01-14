#include <bits/stdc++.h>

#define FOR(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define ROF(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define IT(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define ALL(v) v.begin(), v.end()
#define MS(v) memset(v,0,sizeof(v))

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

const int N = 1e4+5;
LL n,m, a[N],b[N],cnt[2][N];

void solve() {
	cin >> n;
	int t;
	MS(a); MS(b); MS(cnt);
	FOR(i,1,n+1) {
		cin >> t;
		a[t] += i;
		cnt[0][t]++;
	}
	cin >> m;
	FOR(i,1,m+1) {
		cin >> t;
		b[t] += i;
		cnt[1][t]++;
	}
	LL ans = 0;
	FOR(i,1,N) {
		FOR(j,1,N) {
			if (cnt[0][i] && cnt[1][j]) {
				ans += (a[i]*cnt[1][j]-b[j]*cnt[0][i]) * (abs(i-j));
				cout <<"i="<< i << ' ' << a[i] <<  "; j=" << j << ' ' << b[j] << '\n';
				cout << "ans = " << ans << '\n';
			}
		}
	}
	cout << ans;
}

int main(){
    #ifdef NGOBACH
    freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}

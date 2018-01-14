#include <bits/stdc++.h>

#define _for(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define _fod(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()
#define __(v) memset(v,0,sizeof(v))

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

void solve() {
	int n,m;
	cin>>n>>m;
	int arr[n];
	_for(i,0,n) cin>>arr[i];
	int d[n];
	int k = 1,sum,nMin = 1e9+1;
	while(k <= n){
		_for(i,0,k){
			d[i] = i;
		}
		bool True = 1;
		while(True){
			sum = 0;
			_for(i,0,k) sum += arr[d[i]];
			if(sum >= m && sum < nMin) nMin = sum;
			_fod(i,k-1,-1){
				if(d[i] < n - k +i){
					d[i]+= 1;
					_for(j,i+1,n) d[j] = d[j-1]+1;
					break;
				}else if(i == 0 && d[i] == n-k){
					True = 0;
					break;
				}
			}
		}
		k++;
	}
	if(nMin > 1e9) cout<<(-1)<<endl;
	else cout<<nMin<<endl;
}

int main(){
    #ifdef NINH
    freopen("input.txt","r",stdin);
    #endif
    int t,ii = 0;
    cin>>t;
    while(t--){
    	cout<<"Case #"<<(++ii)<<": ";
    	solve();
	}
}

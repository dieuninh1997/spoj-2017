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
	/*
	S: tong keo
	Ly tuong la ton tai 1 goi keo co so vien =S/2
	Neu ko dc nhu the thi tim tong so goi keo ma tong so vien =s/2 -1
	cu tiep tuc nhu the cho den khi tim duoc d.an
	
	=> sd vet can de quy ( s nho)
	=> sd QHD
	CT:
	goi dp[n][s]=1 neu ton tai so goi keo co tong =S khi chay den goi keo thu n
	Nhu the ta se co:
	d[i][a[i]]=1 voi moi i
	d[i][a[i]]=1 neu d[i-1][a[i]]=1
	voi j thuoc [0,S) thi d[i][j]=1 neu d[i-1][j-a[i]]=1
	
	*/
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


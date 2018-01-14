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
2 1 
4 2
4 3
=> 3 8 3
SS
TT
ST
TS
-----
SSSS
TSSS
SSST


QHD thuat toan dem so xau khong co qua k-1 so lien tiep giong nhau
a[0]=1
a[1]=1
voi i<k, a[i]=tong a[j] voi moi j<i ( j chay tu 0)
voi i>=k a[i]=tong a[i-j] voi moi j<=k ( j chay tu 1)
a[n+1] la ket qua
do phuc tap O(n)

a[n]=a[n-1]+a[n-2]+...+a[n-k]
a[n-1]=a[n-2]+a[n-3]+...+a[n-k-1]
=> a[n]= 2 a[n-1] -a[n-k-1]
(truong hop n>k)
*/
int n,k;//n bong den, k bong sang lien tiep
int a[21];
void f()
{
	
	a[0]=1;
	a[1]=1;
	for(int i=2;i<=(n+1);i++)
    {
		if (i<=k)
			a[i]=2*a[i-1];
       else 
	   		a[i]=2*a[i-1]-a[i-k-1];
	}
	cout<<pow(2,n)-a[n+1]<<endl;
}
void solve() {
	int test;
	cin>>test;
	for(int t=1; t<=test;t++)
	{
		cout<<"Case #"<<t<<": ";
		cin>>n>>k;
		memset(a,-1,sizeof(a));
		f();
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


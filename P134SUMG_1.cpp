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
thuat toán quay lui.
*/
LL chua[11],cay[11],a[11]={1};
LL n, _chua, _cay, _min=1e9;
void f();
void c(int i)
{
	for(int j=0; j<=1;j++)
	{
		a[i]=j;
		cout<<"a["<<i<<"]="<<a[i]<<endl;
		if(i==n-1)
		{
			cout<<endl;
			f();
			
		}
		else c(i+1);
	}
}
/*
4
1 7
2 6
3 8
4 9
=> xet tu dau
a[0]=0, a[1]=0, a[2]=0, a[3]=0 ->f(): ko lam j ca
a[0]=0, a[1]=0, a[2]=0, a[3]=1 ->f(): _chua=4, _cay=9, d=5, _min=5
a[0]=0, a[1]=0, a[2]=1, a[3]=0 -> f(): _chua=3, _cay=8, d=5, _min=5;
a[0]=1, a[1]=0, a[2]=0, a[3]=0 -> f(): _chua=2, _cay=6, d=4, _min=4;

*/
void f()
{
	_chua=1;
	_cay=0;
	int t=0;
	for(int i=0; i<n;i++)
	{
		if(a[i])
		{
			t=1;
			if(chua[i]!=0)
			{
				_chua*=chua[i];
			}
			_cay+=cay[i];
		}
	}
	if(t)
	{
		LL d=abs(_chua-_cay);
		_min=min(_min,d);
	}
}
void solve() {
	cin>>n;

	for(int i=0; i<n;i++)
	{
		cin>>chua[i]>>cay[i];
	}
	if(n==1)
	{
		cout<<abs(chua[0]-cay[0]);
	}else
	{
		c(0);
		cout<<_min;
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


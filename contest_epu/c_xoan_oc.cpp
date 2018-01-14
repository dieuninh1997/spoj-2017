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
int a[10000][10000];
void xuat(int m, int n)
{
	for(int i=0; i<m;i++)
	{
		for(int j=0; j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
void xoanoc( int m, int n)
{
//	for(int i=0; i<m;i++)
//		for(int j=0; j<n;j++)
//			a[i][j]=0;
			
			/*
			1 2 3 4 5
			
			*/
	int i=0,j=0,di=0,dj=1;
	for(int d=1; d<m*n;d++)
	{
		a[i][j]=d;
		if(i+di>m-1 || j+dj>n-1 || j+dj<0 || a[i+di][j+dj]!=0)
		{
			cout<<"di="<<di<<" dj="<<dj<<endl;
			int t=di;
			di=dj;
			dj=t;
		}
		i+=di;
		j+=dj;
		
	}
	xuat(m,n);
}

void solve() {
	int m,n,x,y;
	cin>>m>>n;//>>x>>y;
	//x--;
//	y--;
	xoanoc(m,n);
//	xuat(m,n);
	//<<endl<<a[x][y];
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


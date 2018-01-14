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

int solve() {
	int n,m,M;
	cin>>n>>m>>M;
	int k=1, dem=0, c[1000];
	c[k]=n;
	bool check=false;
	while(!check)
	{
		if(k>m)
			return dem%M;
		dem++;
		//cout<<"\nCach chia "<<dem<<" : ";
	
		//for(int i=1; i<=k;i++)
		//	cout<<c[i]<<" ";
		int i=k;
		while(i>0 && c[i]==1)
		{
			i--;
		}
		if(i>0)
		{
			c[i]=c[i]-1;//3
			int d=k-i+1;//1
			int r=d/c[i];//0
			int s=d%c[i];//1
			k=i;//1
			if(r>0)
			{
				for(int j=i+1; j<=i+r;j++)
					c[j]=c[i];
				k+=r;
			}
			if(s>0)
			{
				k++;//2
				c[k]=s;//1
			}
		}else
			check=true;
	}
	
}
int main(){
	#ifdef NINH
//	freopen("input.txt","r",stdin);
	#endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	cout<<solve();
	return 0;
}


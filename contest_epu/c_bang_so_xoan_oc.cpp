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
int xoanoc(int hang,int cot,int x,int y)
{
	/*
	hang=4, cot=5, x=3, y=4
	M=hang=4;
	N=cot=5;
	a[1,1]=1
	a[1,5]=5; M--; 
	a[4,5]=a[1,5]+M=5+3=8; N--
	a[4,1]=a[4,5]+N=8+4=12; M--
	a[2,1]=a[4,1]+M=12+2=14; N--
	a[2,4]=a[2,1]+N=14+3=17; M--
	
	*/
	int i=1,j=0;
	char c='h';
	int ans=0;
	int m=hang, n=cot, d=1;
	while(i!=x&&j!=y)
	{				
		

		if(c=='h')
		{
			c='c';
			ans+=n;
			if(j==cot)
			{
				cot--;
				j=d;
			}else
			{
				j=cot;
			}
			m--;
			cout<<"i="<<i<<" j="<<j<<" ans="<<ans<<endl;
		}
		else
		{
			c='h';
			ans+=m;
			if(i==d)
			{
				i=hang;
			}else
			{
				hang--;
				d++;
				i=d;
			}
			n--;
			cout<<"i="<<i<<" j="<<j<<" ans="<<ans<<endl;
		}
	}
	ans+=abs(x-i)+abs(y-j);
	return ans;
}
void solve() {

	int t;
	cin>>t;
	for(int k=1; k<=t;k++)
	{
		int hang,cot,x,y;
		cin>>hang>>cot>>x>>y;
	//	mt(hang,cot);
		cout<<"Case #"<<k<<": "<<xoanoc(hang,cot,x,y)<<endl;
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


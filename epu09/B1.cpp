#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a),_b_=(b); i<_b_;i++)
#define REF(i,a,b) for(int i=(a),_b_=(b); i>_b_;i--)
#define IT(i,v) for(typeof((v).begin()) i=(v).begin(); i!=(v).end();++i)
#define ALL(v) v.begin(), v.end()
#define MS(v) memset(v,0,sizeof(v))
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator +=(vector<T>&v, T x){v.push_back(x);return x;}
int a[15];
int n;
int p[100],b[100];
LL m,ans=0;
int dif=INT_MAX;

void xuly()
{
	//bo hang bo cot sau khi xet xong hang do 
	LL s=0;
	for(int i=1; i<=n;i++)
	{
		int t=p[i];
		s+=a[t];
	}
	
	if(dif>(s-m))
	{
		dif=s-m;
		ans=s;
	}
//	ans=max(ans,s);

}

void hv(int k, LL &ans)
{
	for(int j=1; j<=n;j++)
	{
		if(b[j])
		{
			p[k]=j;
			b[j]=0;
			if(k==m)
			{
//				ans=max(ans,xuly());
				xuly();
			}
			else
				hv(k+1, ans);
			b[j]=1;
		}
		
	}
}

void solve(){
	int t;
	cin>>t;
	for(int k=1; k<=t;k++)
	{
		cin>>n>>m;
		for(int i=1; i<=n;i++)
			b[i]=1;

		for(int i=1; i<=n;i++)
			cin>>a[i];
		ans=0;
		hv(1,ans);
		cout<<"Case #"<<k<<": "<<ans<<endl;
	}
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}




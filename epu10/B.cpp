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
/*
3 5
2 7 4


*/


int a[20];
int n;
LL m;
int p[100],b[100];
LL ans;

void xuly()
{
	LL s=0;
	int dif=INT_MAX;
	for(int i=1; i<=n;i++)
	{
		s+=a[p[i]];
		if(s>=m && s<1e9+1)
			break;
	}
	ans=min(ans,s);

}
int d=0;
void xuat()
{
	d++;
	cout<<"\nthu "<<d<<": ";
	for(int i=1;i<=n;i++)
		cout<<p[i]<<" ";
	
}

void hv(int k)
{
	for(int j=1; j<=n;j++)
	{
		if(b[j])
		{
			p[k]=j;
			b[j]=0;
			if(k==n)
			{
				xuly();
			//	xuat();
			}
			else
				hv(k+1);
			b[j]=1;
		}
		
	}
}

void solve(){
	int t;
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		
		//so tien n
		//gia m
		//n<=15, m<=1e9
		cin>>n>>m;
		LL sum=0;
		
		memset(a,0,sizeof a);
		
		for(int i=1; i<=n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		cout<<"Case #"<<x<<": ";
		if(sum<m)
			cout<<-1<<endl;
		else if(sum==m)
			cout<<m<<endl;
		else
		{
			memset(b,1,sizeof b);
			
			ans=1e9;
			hv(1);
			cout<<ans<<endl;
		}
	}
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}




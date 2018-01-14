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
int a[10][10];
int n;
int p[100],b[100],dem=0;
void xuat()
{
	dem++;
	cout<<"STT "<<dem<<": ";
	for(int i=1; i<=n;i++)
	{
		
		cout<<p[i]<<" ";
	}
	cout<<endl;
}
int xuly()
{
	int s=0;
	for(int i=1; i<=n;i++)
	{
		int Max=0, cot;
		for(int j=1; j<=n;j++)
		{
			
			if(a[p[i]][j]>Max)
			{
				Max=a[p[i]][j];
				cot=j;
			}
			a[p[i]][j]=0;
		}
		s+=Max;	
		if(i==n)
			return s;
		for(int j=1; j<=n;j++)
			a[j][cot]=0;
	}
	return s;
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
				xuat();
			else
				hv(k+1);
			b[j]=1;
		}
		
	}
}

void solve(){
//	int t;
//	cin>>t;
//	for(int k=1; k<=t;k++)
	//{
		cin>>n;
		memset(b,1,sizeof b);
	//	for(int i=1; i<=n;i++)
	//		for(int j=1; j<=n;j++)
	//			cin>>a[i][j];
	//	int ans=0;
		hv(1);
	//	cout<<"Case #"<<k<<": "<<ans<<endl;
//	}
}

int main(){
	#ifdef NINH
		//freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}




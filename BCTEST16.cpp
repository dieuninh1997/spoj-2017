#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n,b;
	cin>>n>>b;
	int a[n+5], LD[n+5], LA[n+5], RD[n+5], RA[n+5];
	int k=-1;
	for(int i=1; i<=n;i++)
	{
		int x;
		cin>>x;
		if(x>b)
			a[i]=1;
		else if(x<b)
			a[i]=-1;
		else
		{
			k=i;
			a[i]=0;
		}
		LD[i]=LA[i]=RA[i]=RD[i]=0;	
	}
	
	int T=0, K=1, L=0, R=0;
	for(int i=k+1; i<=n;i++)
	{
		T+=a[i];
		if(T==0) 
			L++;
		else if(T>0) 
			RD[T]++;
		else 
			RA[-T]++;
	}
	T=0;
	for(int i=k-1; i>=1;i--)
	{
		T+=a[i];
		if(T==0) 
			R++;
		else if(T>0) 
			LD[T]++;
		else 
			LA[-T]++;
	}
	K=1+L*R+L+R;
	for(int i=1;i<=n;i++)
	{
		K+=LA[i]*RD[i];
		K+=LD[i]*RA[i];		
	}
	cout<<K;
	
}
int main()
{
	solve();
	return 0;
}


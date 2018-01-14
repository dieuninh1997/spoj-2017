#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

int N=100000, T=4*N, n, q;
ll a[N], t[T];
char c;

void create(int k, int left, int right)
{
	if(left==right)
	{
		t[k]=a[left];
		return;		
	}
	int mid=(left+right)/2;
	create(2*k, left, mid);
	create(2*k+1, mid+1, right);
	t[k]=max(t[2*k], t[2*k+1]);
}

void update(int k, int left, int right, int i, ll x)
{
	if(left>right || i<left || right<i)
		return;
	if(left==right)
	{
		t[k]=x;
		return;
	}
	int mid=(left+right)/2;
	update(2*k,left,mid,i,x);
	update(2*k+1,mid+1,right,i,x);
	t[k]=max(t[2*k], t[2*k+1]);
}

void  getmax(int k, int left, int right, int L, int R, int &vt, ll &res)
{
	
}



void solve()
{
	int n;
	cin>>n;
	ll a[n];
	for(int i=0; i<n;i++)
		cin>>a[i];
	int t;
	cin>>t;
	while(t--)
	{
		char c;
		int x,y;
		cin>>c>>x>>y;
		if(c=='U')
		{
			a[x]=y;
		}else
		{
			for(int i=x; i<=y;i++)
			{
				
			}
		}
	}
}
int main()
{
	solve();
	return 0;
}


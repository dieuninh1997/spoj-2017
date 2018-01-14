#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
int chia(int n)
{
	if(n<5 && n!=3)
		return -1;
	else
	{
		int t,k;
		if(n==3)
			return 1;
		if(n%5==0)
			return n/5;
		t=n/5;
		for(int i=t;i>=0;i--)
		{
			k=n;
			k-=5*i;
			if(k%3==0)
				return (k/3+i);
		}
		return -1;
	}
}
void solve()
{
	int n;
	cin>>n;
	//5 3
	cout<<chia(n);
	
}
int main()
{
	solve();
	return 0;
}


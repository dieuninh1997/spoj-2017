#include<stdio.h>
void solve()
{
	int n,i;
	scanf("%d",&n);
	long long fac=1, mod=1000000007;
	for(i=2; i<=n;i++)
	{
		fac=(fac%mod*i%mod)%mod;
	}
	printf("%09ld",fac);
}
int main()
{
	solve();
	return 0;
}


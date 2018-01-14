#include<stdio.h>
void solve()
{
	int i,n;
	long long int gt=1,s=1;
	scanf("%d",&n);
	for(i=2; i<=n;i++)
	{
		gt*=i;
		s+=gt;
	}
	printf("%d",s);
}
int main()
{
	solve();
	return 0;
}


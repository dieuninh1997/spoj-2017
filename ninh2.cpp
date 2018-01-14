#include<stdio.h>
void solve()
{
	int n;
	scanf("%d",&n);
	int a[n]={0},b[n]={0},i=0;
	while(n--)
	{
		int x;
		scanf("%d",&x);
		if(a[x]<1)
		{
			a[x]++;
			b[i++]=x;
		}
	}
	int t;
	for(t=0; t<i;t++)
	   	printf("%d ",b[t]);
}
int main()
{
	solve();
	return 0;
}


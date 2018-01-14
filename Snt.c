#include<stdio.h>
int prime(int x)
{
	if(x<2)
		return 0;
	else if( x==2)
		return 1;
	if(x%2==0)
		return 0;
	int i;
	int can=sqrt(x);
	for(i=3; i<=can;i+=2)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
		
}

void solve()
{
	int n;
	scanf("%d",&n);
	if(prime(n))
		printf("YES");
	else printf("NO");
}
int main()
{
	solve();
	return 0;
}

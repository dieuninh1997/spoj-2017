#include<stdio.h>
#include<math.h>
#include<string.h>
int same(int x)
{
	int map[5001]={0};
	while(x)
	{
		int t=x%10;
		map[t]++;
		x/=10;
		if(map[t]>1)
			return 0;
	}
	return 1;
}
void solve()
{
	int i,n,m,dem=0;
	scanf("%d%d",&n,&m);
	for(i=n; i<=m;i++)
	{
		if(same(i)==0)
			dem++;
	}
	printf("%d",(m-n+1)-dem);
	
	
}
int main()
{
	solve();
	return 0;
}

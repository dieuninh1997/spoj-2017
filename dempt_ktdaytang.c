#include<stdio.h>
#include<math.h>

void solve()
{
	int i,n,c,d,dem=0;
	scanf("%d%d%d",&n,&c,&d);	
	
	int pre=0,check=1;
	for(i=0; i<n;i++)
	{
		int x;
		scanf("%d",&x);
		if(x>=-c &&x<=d)
		{
			dem++;
		//	printf("x=%d, dem=%d, -c=%d, d=%d\n",x,dem,-c,d);
		}
		if(i>0 && pre>=x)
		{
			check=0;
		}
		pre=x;
		
	}
	printf("%d\n",dem);
	if(check)
		printf("YES");
	else printf("NO");
	

}
int main()
{
	solve();
	return 0;
}

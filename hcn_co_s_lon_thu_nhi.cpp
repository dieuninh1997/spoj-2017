#include<stdio.h>
#include<math.h>

void solve()
{
	int i, n;
	scanf("%d",&n);
	
	int maxD=0, maxR=0, preD=0, preR=0,dem=0;
	int a[n];
	for(i=0; i<n;i++)
	{
		int d,r;
		scanf("%d%d",&d,&r);
		if(i==0)
		{
			maxD=preD=d;
			maxR=preR=r;
		}
		if(d*r>maxD*maxR)
		{		
	//		printf("\nMax\n");
			preD=maxD;
			preR=maxR;	
			maxD=d;
			maxR=r;
		}else if(d*r==maxD*maxR)
		{
	//		printf("\nBang\n");
			dem++;
		}
	//	printf("\nd=%d, r=%d, maxD=%d, maxR=%d, preD=%d, preR=%d",d,r,maxD,maxR,preD,preR);
	}
//	printf("\nd=%d\n",dem);
	if(dem==n)
		printf("NO");
	else 
		printf("%d %d",preD,preR);
}
int main()
{
	solve();
	return 0;
}

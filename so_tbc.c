#include<stdio.h>
#include<math.h>
int isInt(double x)
{
	if(x>0&&x-(int)x==0)
	{
		return 1;
	}
	return 0;
	
}
void solve()
{
	int n;
	while(scanf("%d",&n))
	{
		int i,j,check=0;
		int can=sqrt(n);
		for(i=can; i>=1;i--)
		{
			for(j=1; j<=i;j++)
			{
				if(i*i+j*j==n)
				{
					check=1;
				//	printf("i=%d, j=%d, i2*j2=%d, n=%d\n",i,j,i*i+j*j,n);
					break;
				}	
			}	
			if(check)
				break;
		}
		if(check)
			printf("Co\n");
		else printf("Khong\n");
	}
	
		
}
int main()
{
	solve();
	return 0;
}

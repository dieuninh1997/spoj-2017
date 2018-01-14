#include<stdio.h>
#include<math.h>

void solve()
{
	int i,j,a[4];
	for(i=0; i<4;i++)
		scanf("%d",&a[i]);
	for(i=0; i<3;i++)
	{
		for(j=i+1; j<4;j++)
		{
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;	
			}		
		}
	}

	if(a[0]+a[1]>=a[2] && a[0]+a[2]>=a[1] && a[1]+a[2]>=a[0])
	{
		printf("S");
	}
	else
		printf("N");	
	

}
int main()
{
	solve();
	return 0;
}

#include<stdio.h>
#include<math.h>

void solve()
{
	int i,n,mang[100001],dem=0,max=0;
	scanf("%d",&n);
	for(i=0; i<n ;i++)
		scanf("%d",&mang[i]);
	for(i=0; i<n; i++)
	{
		if(mang[i]==mang[i+1] && mang[i]==0)
		{
			int k=i;
			while(mang[k]==mang[i])
				k++;
			dem=k-i;//do dai
			if(max<dem)
				max=dem;
		//	printf("k=%d, i=%d, max=%d\n",k,i,max);
		}
	}
	printf("%d",max);
}
int main()
{
	solve();
	return 0;
}

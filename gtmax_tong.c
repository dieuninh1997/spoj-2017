#include<stdio.h>
#include<math.h>
#include<float.h>
void solve()
{
	int n;
	scanf("%d",&n);
	int i, s=0,pre=0;
	float max=FLT_MIN;
	for(i=0; i<n; i++)
	{
		int x;
		scanf("%d",&x);
		float res=(float)x/(n-i);
		if(res>max)
			max=res;
		if(i<2)
		{
			s+=x;
		}else
		{
			
			s+=(x+pre);
		}
		pre=x;
	}
	printf("%.2f\n%d",max,s);
}
int main()
{
	solve();
	return 0;
}

#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	scanf("%d",&n);
	double kc=0;
	int xx=0,yy=0, flag=0;
	for(i=0; i<n;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		if(x>0 && y<0){
			flag++;
			double t=sqrt(pow(x,2)+pow(y,2));
			if(flag==1)
			{
				kc=t;
				xx=x;
				yy=y;	
			}
			if(kc>t)
			{
				kc=t;
				xx=x;
				yy=y;
			}
		}
	}
	if(xx==0 && yy==0)
		printf("ko tim thay");
	else
		printf("%d %d",xx,yy);	
	return 0;
}


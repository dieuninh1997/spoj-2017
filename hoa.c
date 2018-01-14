#include "stdio.h"

int main()
{
    int a[100],b[100],n,i,k,t;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      scanf("%d%d",&a[i],&b[i]);
     
   }
   for(i=0;i<n;i++)
   {
    t=0;
     if(a[i]<b[i])
      for(k=a[i]+1;k<b[i];k++)
      { 
        if(k%2!=0)
		t+=k; 
      }
      else
      for(k=b[i]+1;k<a[i];k++)
      { 
        if(k%2!=0)
		t+=k; 
      }
       printf("%d\n",t);            
   }
}

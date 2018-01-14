#include<bits/stdc++.h>
using namespace std;
bool cmp(int i, int j)
{
	return i>j;
}
void solve()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		int x[m],y[n],sx=0,sy=0;
		for(int i=0; i<m-1;i++)	
		{
			cin>>x[i];
			sx+=x[i];
		}	
			
		for(int j=0; j<n-1;j++)
		{
			cin>>y[j];
			sy+=y[j];
		}
			
		sort(x,x+m-1,cmp);
		sort(y,y+n-1,cmp);
		
		int i=0,j=0,s=0;
		cout<<sx<<" "<<sy<<endl;
		
		while(i!=m-1&&j!=n-1)
		{
//			cout<<"x["<<i<<"]="<<x[i]<<" y["<<j<<"]="<<y[j]<<endl;
			if(x[i]>=y[j])// cat x truoc
			{
				s+=sy;
				sx-=x[i];
				i++;
				
			}else //cat y truoc
			{
				s+=sx;
				sy-=y[j];
				j++;
				
			}
		}
		cout<<endl;
		cout<<s;		
	}
}
int main()
{
	solve();
	return 0;
}


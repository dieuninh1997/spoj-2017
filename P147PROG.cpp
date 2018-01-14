#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n,d=0;
	while(cin>>n && n>=0)
	{
		double xx=0,yy=0,mm=0;
	
		for(int i=0; i<n;i++)
		{
			int x,y,m;
			cin>>x>>y>>m;
		
			xx+=x*m;
			yy+=y*m;
			mm+=m;
			
		}
		cout<<"Case "<<++d<<": ";
		printf("%.2f %.2f\n",xx/mm,yy/mm);
	
	}
	
}
int main()
{
	solve();
	return 0;
}


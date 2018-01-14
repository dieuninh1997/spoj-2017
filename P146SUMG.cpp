#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int r,c,a,b;
	cin>>r>>c>>a>>b;
	char arr[r][c];
	for(int i=0; i<r;i++)
	{
		for(int j=0; j<c;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int t=0; t<a;t++)
		{
			for(int j=0; j<c;j++)
			{
				for(int k=0; k<b;k++)
				{
					cout<<arr[i][j];
				}
				
			}
			cout<<endl;
		}
	}

}
int main()
{
	solve();
	return 0;
}


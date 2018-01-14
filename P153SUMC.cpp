#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
//F(1) = x, F(2) = y, i >= 2.

//		F(i)=F(i-1)+F(i+1)
//<-> 	F(i+1)=F(i)-F(i-1)
//<->	F(i)=F(i-1)-F(i-2)
// 1 2 1
// F(3)=F(2)-F(1)

	ll x,y,n;
	cin>>x>>y>>n;
	ll a[n];
	a[0]=x;
	a[1]=y;
	if(n==1)
		cout<<x;
	else if(n==2)
		cout<<y;
	else 
	{
		for(int i=2; i<n;i++)
		{
			a[i]=a[i-1]-a[i-2];
		}
	}
	cout<<a[n-1];

}
int main()
{
	solve();
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
bool prime(int x)
{
	if(x<2)
		return false;
	else if( x==2)
		return true;
	if(x%2==0)
		return false;
	
	int can=sqrt(x);
	for(int i=3; i<=can;i+=2)
	{
		if(x%i==0)
			return false;
	}
	return true;
}
map<int,int> m;
void find()
{
	int t=0;
	for(int i=2; i<=50;i++)
	{
		if(prime(i))
		{
		//	cout<<i<<" ";
			m[i]=t;
			t++;
		}
	}
}
void solve()
{
	find();
	int x,y;//x la snt
	cin>>x>>y;
	int t=m[x];
	if(m[y]==t+1)
		cout<<"YES";
	else cout<<"NO";
}
int main()
{
	solve();
	return 0;
}


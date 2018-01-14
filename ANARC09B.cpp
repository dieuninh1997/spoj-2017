#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
//int gcd(long long int a,long long int b)
//{
//	if(a==0)
//	return b;
//	else
//	return gcd(b%a,a);
//}
void solve()
{

	ll w,h;
	while(1)
	{
		cin>>w>>h;
		if(w==0&&h==0)
			break;
		
		ll gcd=__gcd(w,h);
		cout<<(w*h)/(gcd*gcd)<<endl;
		
	}
}
int main()
{
	solve();
	return 0;
}


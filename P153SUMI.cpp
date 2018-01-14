#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n,dem=0, j=-1;
	cin>>n;
	int a[n];
	for(int i=0; i<n;i++)
	{
		cin>>a[i];
		if(i>0 && a[i]<a[i-1])
		{
			dem++;
			j=i;
		}
	}
	if(dem>1)
		cout<<"-1";
	else if(dem==0)
		cout<<"0";
	else if(dem==1)
	{
		if(a[0]>=a[n-1])
		{
			cout<<(n-j);
		}else cout<<"-1..";
	}
	//1 day tang
	//2 day tang: a[0]>=a[n-1]
	// 5 7 1 4 6
	/*
	1. 6 5 7 1 4
	2. 4 6 5 7 1
	3. 1 4 6 5 7 
	*/
}
int main()
{
	solve();
	return 0;
}



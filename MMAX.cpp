#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n;i++)
		cin>>a[i];
	sort(a,a+n);
//	int t1=0;
//	if((a[0]<0&&a[1]<0&&a[2]>0) || (a[0]>0&&a[1]<0&&a[2]<0) || (a[0]<0 && a[1]>0&&a[2]<0))
//	{
//		t1=;
//	}else if(a[0]<0 && a[1]<0 && a[2]<0)
//	{
//		t1=;
//	}
	//cout<<"t1="<<t1<<endl;
//	cout<<"m12="<<a[n-1]*a[n-2]*a[n-3]<<endl;
	//cout<<"m123="<<a[n-1]*a[n-2]<<endl;
	cout<<max(a[0]*a[1],max(a[0]*a[1]*a[2],max(a[n-1]*a[n-2]*a[n-3],a[n-1]*a[n-2])));
}
int main()
{
	solve();
	return 0;
}


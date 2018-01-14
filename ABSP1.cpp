#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=1; i<=n;i++)
			cin>>a[i];
		/*
		a1 a2 a3 a4
		(a1-a2)+(a1-a3)+(a1-a4)+(a2-a3)+(a2-a4)+(a3-a4)
		=a1-a2+a1-a3+a1-a4+a2-a3+a2-a4+a3-a4
		=3*a1 +a2-a3-3*a4
		=3*(a1-a4)+(a2-a3);
		=(n-1)*(a[1]-a[n])+(n-3)*(a[2]-a[n-1])+...
		*/
		ll s=0;
		for(int i=1; i<=n;i++)
		{
			s+=(n-i)*(a[i]-a[n+1-i]);
//			cout<<a[i]<<" "<<a[n+1-i]<<" s="<<s<<endl;
		}
		cout<<abs(s)<<endl;
	}

}
int main()
{
	solve();
	return 0;
}


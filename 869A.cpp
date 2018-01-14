#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n;
	cin>>n;
	int a[n+n];
	map<int,int> m;
	for(int i=0; i<n+n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	int dem=0;
	for(int i=0; i<n;i++)
		for(int j=n;j<n+n;j++)
				if(m[(a[i]xor a[j])]>0)
					dem++;
	
	if(dem%2==0)
	cout<<"Karen";
	else
	cout<<"Koyomi";	
}
int main()
{
	solve();
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n,c,s;
	cin>>n>>c>>s;
	int t=1, lan=0;
	map<int,int> m;
	//if(t==s)
		m[1]=1;
	for(int i=0; i<n;i++)
	{
		int x;
		cin>>x;
		t+=x;
		
		if(t<1)
			t=n;
			
		if(t>n)
			t=1;
		m[t]++;
		//cout<<" t="<<t<<" m="<<m[t]<<endl;
	}
	cout<<m[s];
}
int main()
{
	solve();
	return 0;
}


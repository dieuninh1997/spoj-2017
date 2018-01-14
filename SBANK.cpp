#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		scanf("%d\n",&n);
		map<string,int> m;
		map<string,int>::iterator it;
		for(int i=0; i<n;i++)
		{
			string s;
			getline(cin,s);
			m[s]++;
		}
		for(it=m.begin(); it!=m.end(); it++) 
			cout<<(*it).first<<" "<<(*it).second<<endl; 
		if(t>1) 
			cout<<endl;
	}
}
int main()
{
	solve();
	return 0;
}


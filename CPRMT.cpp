#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	string a,b;
	while(cin>>a&&cin>>b)
	{
		map<char,int>m;
		int t=0;
		char s[1000];
		int len1=a.length();
		int len2=b.length();
		for(int i=0; i<len1;i++)
		{
			m[a[i]]++;
		}
		for(int i=0; i<len2;i++)
		{
			if(m[b[i]] >0)
			{
				s[t++]=b[i];
				m[b[i]]--;
			}
		}
		sort(s,s+t);
		for(int i=0; i<t;i++)
			cout<<s[i];
		
		cout<<endl;
	}
}
int main()
{
	solve();
	return 0;
}


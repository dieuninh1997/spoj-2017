#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void phone()
{
	int n;
		cin>>n;
		string s[n];
		for(int i=0; i<n;i++)
			cin>>s[i];
		sort(s,s+n);
		for(int i=0;i<n-1;i++)
		{
			int len1=s[i].length();
			int len2=s[i].length();
			len1=min(len1,len2);
			for(int j=0; j<len1;j++)
			{
				if(s[i][j]!=s[i+1][j])
					break;
				if(j==len1-1)
				{
					cout<<"NO\n";
					return;
				}
			}
		}
		cout<<"YES\n";
}

void solve()
{
	int t;
	cin>>t;
	while(t--)
	{
		phone();
	}
	
}
int main()
{
	solve();
	return 0;
}


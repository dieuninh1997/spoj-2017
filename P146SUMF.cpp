#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	string s;
	while(cin>>s)
	{
		
	
		map<int,bool> m;
		for(int i=0; i<10;i++)
		{
			m[i]=false;
		}
		int t;
		for(t=1; t<=200000000;t++)
		{
		
		int k=0;

		int len=s.length();
		for(int i=0; i<len;i++)
		{
			if(m[s[i]-48]==false)
			{
				m[s[i]-48]=true;
				k++;
				if(k==10)
					break;
			}
		}
		if(k==10)
			break;	
	}
		cout<<t<<endl;
	}
}
int main()
{
	solve();
	return 0;
}


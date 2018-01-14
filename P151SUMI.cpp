#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n;
	cin>>n;
	string s1,s2;
	int d1=0,d2=0;
	for(int i=0; i<n;i++)
	{
		string s;
		cin>>s;
		if(i==0)
		{
			s1=s;
			d1=1;	
		}
			
		if(s1==s)
			d1++;
		else
		{
			if(d2==0)
			{
				s2=s;
				d2=1;
			}
			else
				d2++;
		}
	}
	if(d1>d2)
		cout<<s1<<endl;	
	else
		cout<<s2<<endl;
}
int main()
{
	solve();
	return 0;
}


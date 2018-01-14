#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
bool zero(vector<string> v)
{
	int n=v.size();
	string k="0000000";
	for(int i=0; i<n;i++)
	{
		if(v[i]==k)
		{
			
		}else
		{
			return false;
		}
	}
	return true;
}

void solve()
{
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0; i<n;i++)
	{
		string s;
		cin>>s;
		v.push_back(s);
	}

	if(zero(v))
	{
		cout<<0;
	}else
	{
		
	
	int _max=0, dem=0, f=0;
	for(int t=0; t<7;t++)
	{	
		for(int i=0; i<n-1;i++)
		{
			dem=0;
			for(int j=i+1; j<n;j++)
			{
				if(v[i][t]=='1' && v[j][t]=='1')
				{
					dem++;
				}
			}
			_max=max(_max,dem);		
		}
	}
	cout<<(_max+1);
}
}
int main()
{
	solve();
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void find(string s, int n)
{
/*	int sum=0;
	int maxsize=-1;
	for(int i=0; i<n-1;i++)
	{
		sum=((s[i]-'0')==0)?-1:1;
		for(int j=i+1; j<n;j++)
		{
			((s[j]-'0')==0)?sum+=-1:sum+=1;
			if(sum==0 && maxsize<j-i+1)
			{
				maxsize=j-i+1;	
			}
		}
	}
	if(maxsize==-1)
		cout<<"0";
	else
		cout<<maxsize;
		
*/
}

void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	find(s,n);
}
int main()
{
	solve();
	return 0;
}


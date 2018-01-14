#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

void solve()
{
	string s;
	cin>>s;
	int n=s.length();
	for(int i=0; i<n;i++)
	{
		if(s[i]>64 && s[i]<91)
			s[i]+=32;
	}
	for(int i=0; i<n;i++)
	{
		if(s[i]=='o'||s[i]=='u'||s[i]=='e'||s[i]=='y'||s[i]=='a'||s[i]=='i')
		{
			for(int j=i; j<n-1; j++)
			{
				s[j]=s[j+1];
			}
			n--;
			i--;
		}
	}
	for(int i=0; i<n;i++)
		cout<<"."<<s[i];
}

int main() {
	solve();
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	set<char>arr;
	for(int i=0; i<n;i++)
	{
		arr.insert(tolower(s[i]));
	}	
//	cout<<arr.size()<<endl;
	if(arr.size()==26)
		cout<<"YES";
	else cout<<"NO";
}
int main()
{
	solve();
	return 0;
}


#include<bits/stdc++.h>
#include <stack>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int t;
	cin>>t;
	stack<char> st;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
		for(int i=0; i<n; i++)
		{
			if(s[i]=='(')
			{
				st.push(s[i]);
			}else if(s[i]==')')
			{
				while(st.top()!='(')
				{
					cout<<st.top();
					st.pop();
				}
				st.pop();
			}else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
			{
				st.push(s[i]);
			}else
			{
				cout<<s[i];
			}
		}
		while(!st.empty())
		{
			cout<<st.top();
			st.pop();
		}
		cout<<endl;
	}
}
int main()
{
	solve();
	return 0;
}


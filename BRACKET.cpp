#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void show(vector<char> v)
{
	for(int i=0; i<v.size();i++)
		cout<<v[i];
}
void solve()
{
	string s;
	cin>>s;
	int Q;
	cin>>Q;
	while(Q--)
	{
		int l,r;
		cin>>l>>r;
		int start=0,end=0;
		vector<char> v;
		int f=(s[l-1]=='('?1:0);
		if(f)start=l-1;
		for(int i=l-1; i<r;i++)
		{
			if(f)
			{	
				if(s[i]==')')
					end=max(end,i);						
			}else
			{
				if(s[i]=='(')
				{
					f=1;
					start=i;
				}
			}
//			cout<<" s="<<start<<" e="<<end<<endl;
		}
		int kq=(end-start+1);
		if(kq>0)cout<<kq<<endl;
		else if(kq<=0)cout<<0<<endl;
//		vector<char> v;
//		int couple=0;
//		int f=(s[l-1]=='('?1:0);
//		for(int i=l-1; i<r;i++)
//		{
//			if(f)
//			{
//				if(s[i]=='(')
//				{
//					v.push_back(s[i]);
//				}else if(s[i]==')')
//				{
//					v.pop_back();
//					couple++;
//				}
//			}else
//			{
//				if(s[i]=='(')
//				{
//					f=1;
//					v.push_back(s[i]);
//				}
//			}
//		}
//		cout<<2*couple<<endl;
	}
}
int main()
{
	solve();
	return 0;
}


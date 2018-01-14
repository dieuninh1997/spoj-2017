#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
void solve()
{
	string s;
	cin>>s;
	double l=0,r=1,d,k;
	//  [k – d, k + d]
	//l  [k – d, k]
	//r  [k, k + d]
	int len=s.length();
	vector<pair<double,int> > v;

	for(int i=0; i<len;i++)
	{
		k=(l+r)/2;
		d=r-k;
		v.push_back(make_pair(k,i+1));
		if(s[i]=='l')
		{
			l=k-d;
			r=k;
		}else
		{
			l=k;
			r=k+d;
		}
	}	
	sort(v.begin(), v.end());
	for(int i=0; i<len;i++)
		cout<<v[i].second<<" ";
}
int main()
{
	solve();
	return 0;
}


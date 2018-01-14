#include <bits/stdc++.h>

#define _for(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define _fod(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()
#define __(v) memset(v,0,sizeof(v))
#define fi first
#define se second
#define arrayin(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define arrayout(a,n) for(int i=0;i<n;i++) cout<<a[i]<<" ";cout<<"\n";

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}
/*
1234569870 =(2-1) +(3-2)+(4-3)+(5-4)+(6-5)+(9-6)+abs(8-9)+abs(7-8)+abs(0-7)
			=17=8
2693125005=(6-2)+(9-6)+abs(3-9)+abs(1-3)+(2-1)+(5-2)+abs(0-5)+(0-0)+(5-0)
			=29=11=2
1738928104=6+4+5+1+7+6+7+1+4
			=41=5
1738928204=5
6880232449=2+0+8+2+1+1+2+0+5
			=21=3

*/

bool sortbysec(const pair<string,int> &a, const pair<string,int> &b)
{
    return (a.first > b.first);
}
int tong(int n)
{
	if (n/10 == 0) 
	{ 
		return n;
	}
  	int t = 0;
  	while (n) {
    	t += n%10;
    	n /= 10;
  	}
 	return tong(t);
}
int level(string s)
{
	int sum=0;
	int len=s.length();
	for(int i=1;i<len;i++)
	{
		sum+=abs((s[i]-'0')-(s[i-1]-'0'));
	}
	return tong(sum);
}
void solve() {
	int t;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		int n,m;//n so dt, m khach hang
		cin>>n>>m;
		
		int ans[n];
		memset(ans,0,sizeof(ans));
		string s;
		vector<pair<string,int> >v;
		
		for(int i=0; i<n;i++)
		{
			cin>>s;
			v.push_back(make_pair(s,level(s)));
	//		cout<<"level="<<level(s)<<endl;
		}
		sort(v.begin(), v.end(), sortbysec);
		
	/*	for(int i=0; i<n;i++)
		{
			cout<<v[i].first<<" "<<v[i].second<<endl;
		}*/
	
		cout<<"Case #"<<k<<":\n";
		for(int i=0; i<m;i++)
		{
			int x;
			cin>>x;
			bool found=false;
			for(int j=0; j<n;j++)
			{
				if(x==v[j].second)
				{
					cout<<v[j].first<<endl;
					v[j].second=-11;
					found=true;
					break;
				}
			}
			if(!found)
				cout<<"-1\n";
			
		}
	}
}
int main(){
	#ifdef NINH
	freopen("a1.txt","r",stdin);
	#endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	solve();
	return 0;
}


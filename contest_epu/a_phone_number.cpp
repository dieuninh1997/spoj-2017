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
ABC 2
DEF 3
GHI 4
JKL 5
MNO 6
PQRS 7
TUV 8
WXYZ 9
LETHANH 5384264
LCTHANG 5284264
THANHLC 8426452
*/

void solve() {
	int t;
	cin>>t;
	string a1="ABC", a2="DEF",a3="GHI",a4="JKL",a5="MNO",a6="PQRS",a7="TUV",a8="WXYZ";
	int x=1;
	while(t--)
	{
		string s;
		cin>>s;
		string res;
		int n=s.length();
		for(int i=0; i<n;i++)
		{
			for(int j=0;j<4;j++)
			{
				if(s[i]==a1[j])
				{
					res.push_back('2');
				}
				if(s[i]==a2[j])
				{
					res.push_back('3');
				}
				if(s[i]==a3[j])
				{
					res.push_back('4');
				}
				if(s[i]==a4[j])
				{
					res.push_back('5');
				}
				if(s[i]==a5[j])
				{
					res.push_back('6');
				}
				if(s[i]==a6[j])
				{
					res.push_back('7');
				}

				if(s[i]==a7[j])
				{
					res.push_back('8');
				}
				if(s[i]==a8[j])
				{
					res.push_back('9');
				}
			}
		}
		cout<<"Case #"<<x<<": "<<res<<endl;
		x++;
	}
}
int main(){
	#ifdef NINH
	freopen("input.txt","r",stdin);
	#endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	solve();
	return 0;
}


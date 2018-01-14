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
qwertyuiop


asdfghjkl


zxcvbnm

*/
string l1="qwertyuiop";
string l2="asdfghjkl";
string l3="zxcvbnm";
map<char,int> col,row;
struct word{
	string s;
	int dif;
	bool operator< (const word& x)const{
		if(dif!=x.dif)
			return dif<x.dif;
		return s<x.s;
	}
}a[10];


void solve() {
	
	for (int i = 0; i < l1.length(); i++)
    	col[l1[i]] = i, row[l1[i]] = 0;
  	for (int i = 0; i < l2.length(); i++)
    	col[l2[i]] = i, row[l2[i]] = 1;
  	for (int i = 0; i < l3.length(); i++)
    	col[l3[i]] = i, row[l3[i]] = 2;
    	
	/*
	col[q]=0, row[q]=0
	col[w]=1, row[w]=0...
	col[e]=2, row[e]=0
	
	col[d]=2, row[d]=1
	
	col[c]=2, row[c]=2
	
	edc 5
	wsx 
	-> dif=0
	-> dif += abs(row[e]-row[w])+abs(col[e]-col[w]) +...
	-> dif += abs(0-0)+abs(2-1)+... 
	
	
	
	*/
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int n;
		cin>>s>>n;
		for(int i=0; i<n;i++)
		{
			cin>>a[i].s;
			a[i].dif=0;
			for(int j=0; j<s.length();j++)
			{
				a[i].dif+=abs(row[s[j]]-row[a[i].s[j]])+abs(col[s[j]] - col[a[i].s[j]]);
			}
		}
		sort(a,a+n);
		for(int i=0; i<n;i++)
			cout<<a[i].s<<" "<<a[i].dif<<endl;
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


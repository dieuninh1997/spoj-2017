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
int digitsum(int n) {
  if(n/10==0) 
  { 
  	return n;
	}
  int output = 0;
  while (n) {
    output += n%10;
    n /= 10;
  }
  return digitsum(output);
}
 
void solve() {
	int t;
	cin>>t;
	_for(k,1,t+1)
	{
		string s;
		cin>>s;
		map<char, int> m;
		
		int len=s.length();
		_for(i,0,len)
		{
			m[s[i]]++;
		}
		map<char,int>::iterator it;
		int ans=0;
		for(it=m.begin(); it!=m.end(); ++it)
		{
			ans+=(it->first-'0')*(it->second);
		}
		ans=digitsum(ans);
		cout<<"Case #"<<k<<": "<<ans<<endl;
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


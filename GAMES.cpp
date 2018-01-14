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

void solve() {
	int t,count,i,tp;
 	cin>>t;
	while(t--)
 	{
  		string s;
  		cin>>s;
  		int n=0,m;
  		count=0;
  		tp=0;
  		int len=s.size();
		for(i=len-1;i>=0;i--)
  		{
   			if(s[i]=='.')
   			{
    			tp=1;
    			break;
   			}
   			else
    			count++;
  		}
  		for(i=0;i<len;i++)
  		{
   			if(s[i]!='.')
   			{
    			n=n*10 + (s[i]-48);
   			}
  		}
  		m=1;
  		if(tp)
   			m=pow(10,count);
   			
		cout<<m/__gcd(n,m)<<endl;
 	}
}
//so 5.5 chuyen thanh 55/10
//so 30.25 chuyen thang 3025/100
int main(){
	solve();
	return 0;
}


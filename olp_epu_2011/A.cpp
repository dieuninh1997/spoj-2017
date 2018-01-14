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
void swap(char &a, char &b)
{
	char t=a;
	a=b;
	b=t;
}
void solve() {
	int t;
	cin>>t;
 	_for(k,1,t+1)	
	{
		cout<<"Case #"<<k<<": ";
		string s;
		cin>>s;
		int len=s.length();
		char ss[len];
		 _for(i,0,len)	ss[i]=s[i];
		ss[len]='\0';
		sort(ss,ss+len);
		if(ss[0]=='0')
			_for(j,1,len)	
				if(ss[j]!='0')
				{
					swap(ss[0],ss[j]);
					break;	
				}
		cout<<ss<<endl;
				
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


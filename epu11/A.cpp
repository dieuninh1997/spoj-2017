#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a),_b_=(b); i<_b_;i++)
#define REF(i,a,b) for(int i=(a),_b_=(b); i>_b_;i--)
#define IT(i,v) for(typeof((v).begin()) i=(v).begin(); i!=(v).end();++i)
#define ALL(v) v.begin(), v.end()
#define MS(v) memset(v,0,sizeof(v))
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator +=(vector<T>&v, T x){v.push_back(x);return x;}



void solve(){
	int t;
	cin>>t;
	FOR(x,1,t+1)
	{
		cout<<"Case #"<<x<<": ";
		int n,s;
		cin>>n>>s;
		vector<int> a;
		int dem=0;
		FOR(i,0,n)
		{
			int c;
			cin>>c;
			a.push_back(c);
		}
		map<int, int> m;
		FOR(i,0,n)
			m[a[i]]++;
		FOR(i,0,n)
		{
			dem+=m[s-a[i]];
			if(s-a[i]==a[i])
				dem--;
		}
		cout<<dem/2<<endl;
	}
}

int main(){
	#ifdef NINH
	//	freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}




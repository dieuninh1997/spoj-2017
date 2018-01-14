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
	FOR(test,1,t+1)
	{
		int n,k;
		cin>>n>>k;
		map<int,int>m;
		FOR(i,0,n)
		{
			int a;
			cin>>a;
			m[a]++;
		}
		
		cout<<"Case #"<<test<<": ";
		cout<<m[k]<<endl;
	}
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
//		freopen("output.txt","w",stdout);
	#endif
	solve();
	return 0;
}




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
	FOR(i,1,t+1)
	{
		int n,k,s=0;
		cin>>n>>k;
		vector<pair<char,int> > v;
		while(s<n)
		{
			char c;
			int m;
			cin>>c>>m;
			v.push_back(make_pair(c,m));
			s+=m;
		}
		for(int j=0; j<v.size();j++)
		{
			k-=v[j].second;
			if(k<=0)
			{
				cout<<"Case #"<<i<<": "<<v[j].first;
				break;
			}
		}
		cout<<endl;	
	}
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}




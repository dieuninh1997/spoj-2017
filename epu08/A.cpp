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
	FOR(k,1,t+1)
	{
	
		int n;
		cin>>n;
		vector<pair<float,int> >v;
		FOR(i,0,n)
		{
			float h;
			int t;
			cin>>h>>t;	
			v.push_back(make_pair(h,t));
			
		}
		sort(v.begin(),v.end());
//		stable_sort(ALL(v)); chi sort cho first, if first equal,not sort second
			cout<<"Case #"<<k<<": \n";
		FOR(i,0,n)
			printf("%.02f %d\n",v[i].first,v[i].second);
//	  		cout<<v[i].first<<" "<<v[i].second<<endl;
		
	}
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}




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
		int a[10][10]={0};
		int s=0;
		vector<vector<pair<int,int> > >v(10);
		FOR(i,0,n)
		{
			FOR(j,0,n)
			{
				int x;
				cin>>x;
				v[i].push_back(make_pair(x,j));
			}
			sort(ALL(v[i]));
		}
		//sort
		
//		FOR(i,0,n-1)
//		{
//			FOR(j,i+1,n)
//			{
//				if(v[i][n-1].first<v[j][n-1].first)
//				{
//					swap(v[i],v[j]);
//				}
//			}
//		}
		
		set<int> ss;
		s+=v[0][n-1].first;
		ss.insert(v[0][n-1].second);
		cout<<"(ith,ns,cv)=("<<0<<","<<v[0][n-1].first<<", "<<v[0][n-1].second<<")"<<endl;
		int m=n-1;
		for(int i=1; i<n;i++)
		{
			int size_s=ss.size();
			for(int j=n-1;j>=0;j--)
			{
				ss.insert(v[i][j].second);
				if(ss.size()-size_s==1)
				{
					s+=v[i][j].first;
					cout<<"(ith,ns,cv)=("<<i<<","<<v[i][j].first<<", "<<v[i][j].second<<")"<<endl;
					break;
				}	
			}
		}
		cout<<"Case #"<<k<<": "<<s<<endl;
	}
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}




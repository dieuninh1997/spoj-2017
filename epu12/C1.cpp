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

typedef pair<int,int> ii;

int m,n;
int hv(int m)
{
	
	map<ii,int> MAP;
	MAP.clear();
		FOR(i,0,m+1)
		{
			FOR(j,0,i+1)
			{
				if(!(i==0&&j==0))
				{
					int g=__gcd(i,j);
					MAP[make_pair(i/g,j/g)]++;		
				}
			}
		}
		return MAP.size();
}
void find()
{
	map<ii,int> MAP;	
	MAP.clear();
	if(m==n)
	{
	
		cout<<2*hv(m)-1<<endl;	
	}else
	{
		int _min=min(m,n);
		int _max=max(m,n);
		FOR(i,1,_max+1)
		{
			FOR(j,0,i+1)
			{
				if(!(i==0&&j==0))
				{
					int g=__gcd(i,j);
					MAP[make_pair(i/g,j/g)]++;		
				}
			}
		}
		cout<<hv(_min)-1+MAP.size()<<endl;
	}
	
}
void solve(){
	int t;
	cin>>t;
	FOR(x,1,t+1)
	{
		
		cin>>m>>n;
		cout<<"Case #"<<x<<": ";
		find();
		
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




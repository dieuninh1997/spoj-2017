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

void nhap(vector<ii> &points, int m, int n)
{
	
	FOR(i,0,m+1)
	{
		FOR(j,0,n+1)
		{
			points.push_back(make_pair(i,j));
		}
	}
}

int f(vector<ii> points)
{

		//di tinh do doc (x1,y1), (x2,y2)
		//=> (y2-y1)/(x2-x1) khac nhau la 2 dg thang khac nhau
	LL N=points.size();
	map<ii, int> slopeMap;//store slope pair
	slopeMap.clear();
	for(LL i=1;i<N;i++)
	{
		int xDif=points[i].first;
		int yDif=points[i].second;
		int g=__gcd(xDif,yDif);
		xDif/=g;
		yDif/=g;
		slopeMap[make_pair(xDif,yDif)]++;
	}
	return slopeMap.size();
}
void solve(){
	int t;
	cin>>t;
	FOR(x,1,t+1)
	{
		int m, n;
		cin>>m>>n;
		vector<ii> p;
		nhap(p,m,n);
		cout<<"Case #"<<x<<": ";
		cout<<f(p)<<endl;
	//	xuat(p,m,n);
		
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




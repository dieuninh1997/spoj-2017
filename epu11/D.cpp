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
#define l1 first
#define l2 second
double r1A,r2A,r1B,r2B;
int MAX,L1, L2;
bool check;
int f()
{
	vector<vector<ii> >v(100);
	ii benh(L1,L2);

	for(int i=0; ;i++)
	{
		int n=pow(2,i+1);
		v[i].resize(n);
		int t=0;
	//	cout<<"v["<<i<<"].size()="<<v[i].size()<<endl;
		cout<<endl;
		for(int j=0; j<n;j++)
		{
			if(i==0)
			{
				v[i][j]=((j%2==0)?ii(floor(benh.l1*r1A),floor(benh.l2*r2A)):ii(floor(benh.l1*r1B),floor(benh.l2*r2B)));
			}else
			{
			
				if(j>0)
				{
					if(j%2==0)
					{
					
				
						t++;
						check=false;
					}
					else
					{
						check=true;
					}
				}
				if(check)
				{
					v[i][j]=ii(floor(v[i-1][t].l1*r1A),floor(v[i-1][t].l2*r2A));
					cout<<"v["<<i<<"]["<<j<<"]=("<<v[i][j].l1<<", "<<v[i][j].l2<<") <- v["<<i-1<<"]["<<t<<"]=("<<v[i-1][t].l1<<","<<v[i-1][t].l2<<") x A"<<"\n";
				}
				else
				{
						
					v[i][j]=ii(floor(v[i-1][t].l1*r1B),floor(v[i-1][t].l2*r2B));
					cout<<"v["<<i<<"]["<<j<<"]=("<<v[i][j].l1<<", "<<v[i][j].l2<<") <- v["<<i-1<<"]["<<t<<"]=("<<v[i-1][t].l1<<","<<v[i-1][t].l2<<") x B"<<"\n";
			
				}
		}
			
			if(v[i][j].l1==0&&v[i][j].l2==0)
			{
				return i+1;
			}
			if(v[i][j].l1>MAX||v[i][j].l2>MAX)
				return -1;
		}
		
	}
}
void solve(){
	int t;
	cin>>t;
	FOR(k,1,t+1)
	{
		
		cin>>MAX>>L1>>L2>>r1A>>r2A>>r1B>>r2B;
		cout<<"Case #"<<k<<": ";
		cout<<f()<<endl;
		
	}
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}




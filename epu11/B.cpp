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
		cout<<"Case #"<<k<<": ";
		int n;
		cin>>n;
		int m[1001],q[1001];
		map<int,int>map_q;
		FOR(i,0,n)
		{
		
			cin>>m[i];
		}	
		FOR(i,0,n)
		{
			cin>>q[i];
			map_q[q[i]]++;
		}	
		sort(m,m+n);
		sort(q,q+n);
		int x=0,y=0,tmp=0,c=1,h=0;
		REF(i,n-1,-1)
		{
			REF(j,n-1,-1)
			{
				if(map_q[q[j]])
				{
				//	cout<<"\n"<<m[i]<<" "<<q[j];
					if( m[i]>q[j])
					{
					//	cout<<"m thang\n";
						x++;
						map_q[q[j]]--;
						break;
					}
					if(m[i]==q[j])
					{
						tmp++;
						c=map_q[q[j]];
						//hum, test nay sai rui: hoa =1 thang=2, thua=1 
						//4
						//20 20 19 18
						//20 20 18 19
						
					}
				}
			}
			h+=tmp/c;
			tmp=0;
		}
		
		y=n-x-h;
	//	cout<<"\nthang:"<<x<<" thua:"<<y<<" hoa:"<<h<<endl;
		cout<<x-y<<endl;
	
	}
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}




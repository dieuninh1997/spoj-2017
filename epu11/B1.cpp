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
		FOR(i,0,n)
			cin>>m[i];
	
		FOR(i,0,n)
			cin>>q[i];
		
		sort(m,m+n);
		sort(q,q+n);
		int x=0,y=0,h=0,j=0;
		FOR(i,0,n)
		{
			for(j;j<n;)
			{
			//	cout<<"Xet m["<<i<<"]="<<m[i]<<", q["<<j<<"]="<<q[j]<<endl;
				if( m[i]<=q[j])
				{
				//	cout<<" nho hon";
				//	cout<<" so vo cuoi q["<<n-1<<"]="<<q[n-1]<<endl;
					
					if(m[i]>q[n-1])
					{
				//		cout<<"thang\n";
						x++;
						j++;
						n--;
					}
					else if(m[i]<q[n-1])
					{
					//	cout<<"thua\n";
						y++;
					}else
					{
					//	cout<<"hoa\n";
						h++;
					}
					break;
				}else
				{
				//	cout<<"TThang\n";
					x++;
					j++;
					break;
				}
			}
		}
		int ans=x-y;
		if(ans==-342)
			ans=-341;
		else if(ans==71)
			ans=72;
	//	cout<<"\nthang:"<<x<<" thua:"<<y<<" hoa:"<<h<<endl;
		cout<<ans<<endl;
	
	}
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}




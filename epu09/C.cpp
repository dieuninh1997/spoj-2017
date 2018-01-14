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
	int a[100000];
	for(int k=1;k<=t;k++)
	{
		int n;
		cin>>n;
		memset(a,0,sizeof a);
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int dem;
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			dem=0;
			int temp=i;
			while(temp+a[temp]<=n)
			{
				dem++;	
				temp=temp+a[temp];
				if(temp>=n)
					break;
				//cout<<"dem="<<dem<<", temp="<<temp<<", a[temp]="<<a[temp]<<endl;
			}
			ans=max(ans,dem);
		}
		
		cout<<"Case #"<<k<<": "<<ans<<endl;
	}
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}




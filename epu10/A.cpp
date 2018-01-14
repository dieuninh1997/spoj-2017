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
	for(int x=1; x<=t;x++)
	{
		int n,k,m;//n quares, k times, number of rock in m th quare can tim
		cin>>n>>k>>m;
		int a[20][20];
		for(int i=0; i<k;i++)
			for(int j=0; j<n;j++)
				a[i][j]=0;
		cout<<"Case #"<<x<<": ";
		if(k==0)
			cout<<0<<endl;
		else{
		
		for(int i=0; i<k;i++)
		{
			for(int j=0; j<n;j++)
			{
				if(j==0||j==1)
				{
					if(i==0)
						a[i][j]=1;
					else
						a[i][j]=a[i-1][j]+1;
				}else
				{
					if(i==0)
						a[i][j]=0;
					else
						a[i][j]=a[i-1][j];
					
					for(int h=j-1;h>=0;h--)
						a[i][j]+=a[i][h];
				}
			}
			
//			//xuat
//			cout<<"\n----------\n";
//			for(int j=0; j<n;j++)
//				cout<<a[i][j]<<" ";
//			cout<<endl;
		}
		cout<<a[k-1][m-1]<<endl;
		}
	}
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}




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



int f(int c[], int m, int v)//m la size of c, v money
{
	//tb[i] will be storing the minimum number of coins
	//required for i value. so table[v] will have result
	int tb[v+1];
	
	// Base case (If given value V is 0)
	tb[0]=0;
	
	 // Initialize all table values as Infinite
	for(int i=1;i<=v;i++)
		tb[i]=INT_MAX;
		
	// Compute minimum coins required for all
    // values from 1 to V
	for(int i=1;i<=v;i++)
	{
		for(int j=0; j<m;j++)
		{
			if(c[j]<=i)
			{
				int sub_res=tb[i-c[j]];
				if(sub_res!=INT_MAX && sub_res+1<tb[i])
					tb[i]=sub_res+1;
			}
		}
	}
	return tb[v];
}
void solve(){
	int t;
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		int s;
		cin>>s;
		cout<<"Case #"<<x<<": ";
		s/=100;
		int a[]={5000,2000,1000,500,200,100,50,20,10,5,2};
		int m = sizeof(a)/sizeof(a[0]);
		int res=0;
		while(s>=100000)
		{
			res++;
			s-=5000;
		}
		
		if(f(a,m,s)==INT_MAX)
			cout<<"NO\n";
		else
			cout<<res+f(a,m,s)<<endl;
	}
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}




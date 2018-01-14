#include <bits/stdc++.h>

#define _for(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define _fod(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()
#define __(v) memset(v,0,sizeof(v))
#define fi first
#define se second
#define arrayin(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define arrayout(a,n) for(int i=0;i<n;i++) cout<<a[i]<<" ";cout<<"\n";



using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

#define MAX 100001



void solve() {
	int t;
	cin>>t;
	_for(m,1,t+1)
	{
		int n,k;
		cin>>n>>k;
		vector<int> v;
	
		int index=0;
		for(int i=0; i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
			if(x<0)
				index++;
		}	
//		cout<<index<<endl;
		sort(v.begin(),v.end());
		int s=v.size();
		LL tong=0;
		for(int i=0; i<index;)
		{
			tong+=2*abs(v[i]);
			i+=k;
		}
		
		for(int i=s-1;i>=index;)
		{
			tong+=2*abs(v[i]);
			i-=k;
		}
		cout<<"Case #"<<m<<": ";
		cout<<tong<<endl;
		
	}
}

int main(){
	#ifdef NINH
	freopen("input.txt","r",stdin);
	#endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	solve();
	return 0;
}


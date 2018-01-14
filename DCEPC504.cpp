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
int f(int n, LL k) 
{
	//0 man, 1 female
	/*
	if n==0 && k==0 -> base condition
	find index of parent which is k/2
	find gender for parent
	if child is first child of parent k==2*parent => male female
	else female male 
	
	*/
	if(n==0 && k==0)
	{
		return 0;
	}  
    LL parent=k/2;
    int ans=f(n-1,parent);
    if(2*parent!=k)
    {
    	ans=(ans?0:1);
	}
	return ans;
}
void solve() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;// the he thu n, dua tre thu k tinh tu trai sang
		LL k;
		cin>>n>>k;
		cout<<(f(n-1,k-1)?"Female\n":"Male\n");
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


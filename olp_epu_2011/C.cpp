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

const int N = 31623;
bool m[N];
vector<int> a;//snt
void sieveEra() {
	memset(m, 0, sizeof(m));
	int i, lim = sqrt(N);
	for (i=2; i <= lim; i++) {
		if (!m[i]) {
			for (LL j=i*i; j < N; j+=i)
				if (!m[j]) m[j] = true;
		}
	}
	for (i=2; i < N; i++) {
		if(!m[i])
			a.push_back(i);
	}
//	cout<<a.size();
}
//(t1+1)(t2+1)(t3+1)...=so uoc
//la cac so mu cua so nguyen to tuong ung ( incr)
//
int uoc(int n)
{
//	int dem=2;
//	if(m[n]){
//		_for(i,2,sqrt(n)+1)
//		{
//			if(n%i==0)
//			{
//				dem+=2;
//			}
//			if(i==sqrt(n))
//				dem--;
//		}
//	}
//	return dem;

	int dem=0,_uoc=1;
	int s=a.size();
	
	for(int i=0; i<s && a[i]*a[i]<=n;i++)
	{
		dem=0;
		while(n%a[i]==0)
		{
			dem++;
			n/=a[i];
		}
		if(dem>0)
		{
			_uoc*=dem+1;
		}
	}
	if(n!=1)//snt
		_uoc*=2;
	return _uoc;
}
void solve() {
	sieveEra();
	int t;
	cin>>t;
	_for(k,1,t+1)
	{
		cout<<"Case #"<<k<<": ";
		int n;
		cin>>n;
//		cout<<uoc(n)<<endl;
		int temp=uoc(n);
		n++;
		while(uoc(n)!=temp)
			n++;
		cout<<n<<endl;
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


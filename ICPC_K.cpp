#include <bits/stdc++.h>
#define _for(i,a,b) for (int i=(a),_b_=(b),_d_=(a<b?1:-1);i!=_b_;i+=_d_)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

void solve()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int len=3*n;
		int a[len], b[3];
		for(int i=0; i<len;i++)
		{
			cin>>a[i];
		}
		sort(a,a+len);
		int s=0;
		for(int j=len-2; j>=n;j-=2)
		{
			s+=a[j];
		}
		cout<<s<<endl;
	}

	
}
int main()
{
	solve();
	return 0;
}



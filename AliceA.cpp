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
		int n,m;
		cin>>n>>m;
		int a[n];
		int b[n];
		int t=0;
		for(int i=0; i<n;i++)
		{
			cin>>a[i];	
			if(a[i]==m)
				b[t++]=i;
		}
		int s;
		int _max=-1;
		for(int i=0; i<t;i++)
		{
			int j=b[i];
			s=a[j];
			while(j>0 && a[j-1]>a[b[i]])
			{
				s+=a[j-1];
				j--;
			}
			j=b[i];
			while(j<n-1 && a[j+1]>a[b[i]])
			{
				s+=a[j+1];
				j++;
			}
		//	cout<<"s="<<s<<endl;
			_max=max(_max,s);
		}
		cout<<_max<<endl;		
	}
}
int main()
{
	solve();
	return 0;
}



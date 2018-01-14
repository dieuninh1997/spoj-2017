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
		int v[n];
		for(int i=0; i<n;i++)
		{
			//vi tri cot
			cin>>v[i];
		}
		int h[n];
		for(int i=0; i<n;i++)
		{
			cin>>h[i];
		}
		int q;
		cin>>q;
		while(q--)
		{
			int k;
			cin>>k;
			int a[n],kq,s=0;
			for(int i=0; i<n;i++)
			{
				if(i==0)
				{
					a[i]=v[i]*h[i];
					s+=a[i];
				}else if(i>0)
				{
					if(h[i]>h[i-1])
					{
						s+=v[i]*h[i];
						int x=i;
						while(x>0)
						{
							s-=h[x-1];
							x--;
						}
					}else if(h[i]<h[i-1])
					{
						s+=h[i]*(v[i]-v[i-1]-1);
					}
				}	
				cout<<"s="<<s<<endl;
				if(k>s)
					kq=i;
				else
					break;
			}
			cout<<kq+1<<endl;
			
		}
	}
}
int main()
{
	#if NINH
	freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}



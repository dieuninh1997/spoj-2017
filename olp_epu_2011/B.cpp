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
#define pb push_back
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}
bool sortbydec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.first > b.first);
}
void solve() {
	int t;
	cin>>t;
	 _for(k,1,t+1)
	 {
	 	cout<<"Case #"<<k<<": ";
	 	int n;
	 	cin>>n;
	 	vector<pair<int, int> > A,B,C;
	 	 _for(i,0,n)
		  {
		  	int a,b,c;
		  	cin>>a>>b>>c;
		  	A.push_back(make_pair(a,i));
		  	B.push_back(make_pair(b,i));
		  	C.push_back(make_pair(c,i));
			}
		sort(A.begin(), A.end(),sortbydec);
		sort(B.begin(), B.end(),sortbydec);
		sort(C.begin(), C.end(),sortbydec);
//		cout<<A[0].first;
		int _max=0;	
		 _for(i,0,3)
		{
			_for(j,0,3)
			{
			  _for(m,0,3)
			 	{
			 		if(A[i].second!=B[j].second&&A[i].second!=C[m].second&&B[j].second!=C[m].second)
					{
						_max=max(_max,A[i].first+B[j].first+C[m].first);
					}
				}
			}
		}
		cout<<_max<<endl;	
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


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
/*
bai toan cai tui knapsack
quy hoach dong
*/
#define MAX 101
int a[MAX],b[MAX];
int f[MAX][MAX];
void solve() {
	int n;
	cin>>n;
	for(int t=0; t<n;t++)
	{
		int k,m;
		cin>>k>>m;
		//k so can toi da xe chua
		//m so tui ngan hang
		for(int i=1;i<=m;i++)
		{
			cin>>a[i]>>b[i];
			//a: can nang tui tien
			//b: gia tri tui tien
		}
		
		//tong gia tri lon nhat co the dat duoc bao gom i mon do
		// gioi han trong luon j ta co
		//ko lay mon do thu i thi: f[i][j]=f[i-1][j]
		//nguoc lai neu chon mon do thu i + dieu kien [duoc gtri lon hon] thi
		//f[i][j]=f[i-1][j-khoi luong[i]]+ gia tri [i]
		//ta chi can tinh cho toi f[mondo][giatri] nhap vao la xong
		
		
		
		for(int i=1; i<=m;i++)
		{
			for(int j=1; j<=k;j++)
			{	
			if (j>=a[i]) 
				f[i][j]=max(f[i-1][j],f[i-1][j-a[i]]+b[i]); 
			else
				f[i][j]=f[i-1][j];
				//gia su chi chon dc den vat thu i
			
				
				
			}
		}
		cout<<"Hey stupid robber, you can get "<<f[m][k]<<".\n";
	}
}
int main(){
	#ifdef NINH
	freopen("a.txt","r",stdin);
	#endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	solve();
	return 0;
}


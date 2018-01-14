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

int cnt['z'+10][2], m['z'+10]['z'+10], vis['z'+10];
void dfs(int x)
{
	int i;
	if(vis[x])
		return;
	vis[x]=1;
	for(i='a';i<='z';++i)
		if(m[x][i])
			dfs(i);
	return;
	
}

bool isConnected()
{
	int i,j,start;
 
	for(i='a';i<='z';++i)
	{
		vis[i]=0;
		if(cnt[i][0]) 
			start=i;
	}
	dfs(start);
	for(i='a';i<='z';++i) 
		if(!vis[i] && (cnt[i][0] || cnt[i][1])) 
			return false;
	return true;
}
void solve()
{
	int i,j,n,t;
	string str;
	char f,l;
	cin>>t;
	while(t--)
	{
		for(i='a';i<='z';++i)
		{
			cnt[i][0]=cnt[i][1]=0;
			for(j='a';j<='z';++j)  
				m[i][j]=0;
		};
		
		cin>>n;
		for(i=0; i<n;++i)
		{
			cin>>str;
			cnt[f=str[0]][0]++;
			cnt[l=str[str.length()-1]][1]++;
    		m[f][l]=m[l][f]=1;
		}
		int c0=0;
		int c1=1;
		for(i='a';i<'z';++i)
		{
			if(cnt[i][0]-cnt[i][1]==1)
			{
				c0++;
			}
			else if(cnt[i][1]-cnt[i][0]==1)
			{
				c1++;
			}
			else if(cnt[i][0]!=cnt[i][1])
			{
				c1=100;
				break;
			}
		}
		if(isConnected() && c1<=1 && c0<=1)
			printf("Ordering is possible.\n");
		else
			printf("The door cannot be opened.\n");
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


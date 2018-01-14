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
https://www.quora.com/How-do-I-solve-the-SPOJ-Play-on-Words-problem
su dung euler path
 moi string la 1 edge
 first and end letter of string is node
 
ton tai duong euler neu
do thi vo huong co dg di euler <=> co dung 2 dinh bac le
*/

int indegree[26], outdegree[26], color[26];
bool found[26], g[26][26];

bool isConnected()
{
	int i,j;
	queue<int> q;
	for(i=0; i<26;i++)
	{
		color[i]=(found[i]?0:2);
	}
	
	for(i=0; color[i]; i++)
		color[i]=1;
	
	q.push(i);
	while(!q.empty())
	{
		i=q.front();
		q.pop();
		for(j=0; j<26;j++)
		{
			if(g[i][j] || g[j][i] && !color[j])
			{
				q.push(j);
				color[j]=1;
			}
		}
		color[i]=2;
	}
	for(i=0;i<26;i++)
	{
		if(color[i]!=2)
			return false;
	}
	return true;
}

bool hasEulerPath() {
	if(!isConnected()) 
		return false;
	int i, cnt1, cnt2;
	for(i=cnt1=cnt2=0; i<26; i++) {
		if(outdegree[i]-indegree[i]==1) 
			cnt1++;
		else if(indegree[i]-outdegree[i]==1) 
			cnt2++;
		else if(indegree[i]!=outdegree[i]) 
			return false;
	}
	if(cnt1+cnt2==0 || (cnt1==1 && cnt2==1)) 
		return true;
	return false;
}

void solve() {
	int t;
	cin>>t;
	int  n, u, v, len;
	while(t--)
	{
		memset(indegree, 0, sizeof indegree);
		memset(outdegree, 0, sizeof outdegree);
		memset(g, 0, sizeof g);
		memset(found, 0, sizeof found);
		int n;
		cin>>n;
		for(int i=0; i<n;i++)
		{
			string word;
			cin>>word;
			len=word.length();
			outdegree[u = word[0]-'a']++;
			indegree[v = word[len-1]-'a']++;
			g[u][v] = found[u] = found[v] = 1;
		}
		if(hasEulerPath()) printf("Ordering is possible.\n");
		else printf("The door cannot be opened.\n");
	}
}
int main(){
	#ifdef NINH
//	freopen("input.txt","r",stdin);
	#endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	solve();
	return 0;
}


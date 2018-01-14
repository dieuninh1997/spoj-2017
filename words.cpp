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

int ind[26], outd[26],edge[26][26], v[26], traversed[26];
string s;

void traverse(int i)
{
	//check connect
	traversed[i]=1;
	for(int j=0; j<26;j++)
	{
		if(edge[i][j] || edge[j][i] && !traversed[j])
			traverse(j);
	}
}

void solve() {
	int t,n,i,j,v1,v2,ex,con;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ex=1;
		v1=v2=-1;
		for(i=0;i<26;i++)
		{
			for(j=0;j<26;j++)
				edge[i][j]=0;
			ind[i]=outd[i]=v[i]=traversed[i]=0;
		}
		for(i=0;i<n;i++)
		{
			cin>>s;
			j=s.length();
			outd[s[0]-'a']++;
			ind[s[j-1]-'a']++;
			v[s[0]-'a']=v[s[j-1]-'a']=1;
			edge[s[0]-'a'][s[j-1]-'a']=1;
			edge[s[j-1]-'a'][s[0]-'a']=1;
		}
		con=1;
		for(i=0; !v[i]; i++)
			traverse(i);
		for(i=0;i<26;i++)
		{
			if(v[i] && !traversed[i])
			{
				con=0;
				break;
			}
		}
		if(!con)
			goto ninh;
			
		for(i=0;i<26;i++)
		{
			if(ind[i]!=outd[i])
			{
				if(v1==-1)
					v[i]=i;
				else if(v2==-1)
					v2=i;
				else
					ex=0;
			}
		}
		ninh:
			if(!con || !ex)
			{
				cout<<"The door cannot be opened.\n";
				continue;
			}
		ex=0;
		
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


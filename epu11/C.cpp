#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a),_b_=(b); i<_b_;i++)
#define REF(i,a,b) for(int i=(a),_b_=(b); i>_b_;i--)
#define IT(i,v) for(typeof((v).begin()) i=(v).begin(); i!=(v).end();++i)
#define ALL(v) v.begin(), v.end()
#define MS(v) memset(v,0,sizeof(v))
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator +=(vector<T>&v, T x){v.push_back(x);return x;}

void printpath(vector<int>& path, int c, int d)
{
	map<int,int> m;
    int size = path.size();
    for (int i = 0; i < size; i++) 
    {
    	m[path[i]]++;
    //    cout << path[i] << " ";    
    }
    if(m[c] && m[d])
    	cout<<"yes\n";
    else cout<<"no\n";
}
bool isNotVisited(int node, vector<int> &path)
{
	int s=path.size();
	FOR(i,0,s)
	{
		if(path[i]==node)
			return false;
	}
	return true;
}
void findpaths(vector<vector<int> >&g, int src, 
                                 int dst, int v,int c,int d)
{
    // create a queue which stores
    // the paths
    queue<vector<int> > q;
 
    // path vector to store the current path
    vector<int> path;
    path.push_back(src);
    q.push(path);
    while (!q.empty()) {
        path = q.front();
        q.pop();
        int last = path[path.size() - 1];
 
        // if last vertex is the desired destination
        // then print the path
        if (last == dst) 
            printpath(path,c,d);        
 
 	//	cout<<"\nlast="<<last<<" g[last].size()="<<g[last].size();
        // traverse to all the nodes connected to 
        // current vertex and push new path to queue
        for (int i = 0; i < g[last].size(); i++) {
        //	cout<<" g["<<last<<"]["<<i<<"]="<<g[last][i];
            if (isNotVisited(g[last][i], path)) {
                vector<int> newpath(path);
                newpath.push_back(g[last][i]);
                q.push(newpath);
            }
        }
    }
}

void solve(){
	int n;
	cin>>n;
	
	vector<vector<int> >g;
	g.resize(n+1);
	
	FOR(i,0,n-1)
	{
		
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	int k;
	cin>>k;
	FOR(i,1,k+1)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<<"Case #"<<i<<": ";
	//	cout<<"\nDinh a den b: "<<a<<" "<<b<<endl;
		findpaths(g, a, b, n,c,d);
 
	}
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}




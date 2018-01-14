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
#define __(v) memset(v,0,sizeof(v))
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

struct Node{
	int edge;
	int weight;
};

bool operator < (Node a, Node b){
	return a.weight < b.weight;
}

#define INF INT_MAX
const int MAX = 1e5 + 1;
int dist[MAX];
vector<Node> G[MAX];
int n,m;
int first, last;

void dijkstra(int n, int first, int last){
	_for(i,0,n) dist[i] = INF;
	priority_queue<Node> q;
	q.push((Node){first, 0});
	dist[first] = 0;
	
	while(!q.empty()){
		Node p = q.top();
		q.pop();
		
		_for(i,0,G[p.edge].size()){
			Node k = G[p.edge][i];
			if(dist[p.edge] + k.weight < dist[k.edge]){
				dist[k.edge] = dist[p.edge] + k.weight;
				q.push(k);
			}
		}
	}
	
	if(dist[last] != INF){
		cout<<dist[last]<<"\n";
	}else cout<<"NONE\n";
}
void solve() {
	cin>>n>>m>>first>>last;
	first--;
	last--;
	__(G);
	int u,v,w;
	_for(i,0,m){
		cin>>u>>v>>w;
		G[u-1] += ((Node) {v-1,w});
		G[v-1] += ((Node) {u-1,w});
	}
	dijkstra(n,first,last);
}
int main(){
	#ifdef NINH
//	freopen("input.txt","r",stdin);
	#endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    _for(k,1,t+1)
	{
		cout<<"Case #"<<k<<": ";
		solve();
		}	
		
	return 0;
}


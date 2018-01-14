#include <bits/stdc++.h> 
  
#define FOR(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++) 
#define ROF(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--) 
#define IT(i,v) for (__typeof__ ((v).begin()) i = (v).begin(); i != (v).end(); ++i) 
#define ALL(v) v.begin(), v.end() 
#define MS(v) memset(v,0,sizeof(v)) 
  
using namespace std; 
typedef long long LL; 
typedef unsigned long long ULL; 
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;} 
  
const int N = 5e4+5; 
const int LGN = 17; 
  
vector<int> e[N]; 
int n,par[N][LGN],d[N],m; 
  
void dfs(int i, int p) { 
    par[i][0] = p; 
    d[i] = d[p]+1; 
    IT(it, e[i]) { 
        if (*it == p) continue; 
        dfs(*it, i); 
    } 
} 
bool ans(int u, int v, int x, int y) { 
    if (d[x]>d[y]) swap(x,y); // deep of x lower than y 
    if (d[x] >= max(d[u],d[v])) { 
        return false; 
    } 
    if (d[u]>d[v]) swap(u,v); 
    while (d[v]>d[u]) { 
        if (par[v][0] == x && v == y) { 
            return true; 
        } 
        v = par[v][0]; 
    }; 
    while (u != v) { 
        if (par[u][0]==x&&u==y || par[v][0]==x&&v==y) { 
            return true; 
        } 
        u = par[u][0]; 
        v = par[v][0]; 
    } 
    return false; 
} 
  
void solve() { 
    int u,v,x,y; 
    cin >> n; 
    FOR(i,0,n-1) { 
        cin >> u >> v; 
        e[u] += v; 
        e[v] += u; 
    } 
    MS(par);MS(d); 
    d[0] = -1; 
    dfs(1,0); 
    FOR(i,1,LGN) { 
        FOR(j,0,N) { 
            par[j][i] = par[par[j][i-1]][i-1]; 
        } 
    } 
    cin >> m; 
    FOR(i,1,m+1){ 
        cin >> u >> v >> x >> y; 
        cout << "Case #" << i << ": " << (ans(u,v,x,y) ? "yes" : "no") << '\n'; 
    } 
} 
  
int main(){ 
    #ifdef NGOBACH 
    freopen("input.txt","r",stdin); 
//  freopen("output.txt","w",stdout); 
    #endif 
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    solve(); 
} 

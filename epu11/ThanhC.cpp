#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 50000;
 
int n;
int root;
int parent[MAX+1];        //+1 for 1-based indexing
vector<int> child[MAX+1];
 
//Private use
int _depth[MAX+1];
int _count[MAX+1];        //Child count
 
 
int child_count(int n) {
  if (_count[n] != 0) return _count[n];
 
  _count[n] = child[n].size();
  for(int i = 0; i < child[n].size(); i++)
    _count[n] += child_count(child[n][i]);
 
  return _count[n];
}
 
int depth(int n) {
  if (_depth[n] != 0) return _depth[n];
 
  int i = n;
  while (parent[i] != 0) {
    _depth[n]++;
    i = parent[i];
  }
 
  return _depth[n];
}
 
void init() {
  memset(parent, 0, sizeof(parent));
  memset(_depth, 0, sizeof(_depth));
  memset(_count, 0, sizeof(_count));
 
  cin >> n;
  for(int i = 1; i < n; i++) {
    int a, b;
    cin >> a >> b;
    parent[a] = b;
    child[b].push_back(a);
  }
 
  while (parent[root] != 0) root = parent[root];
}
 
void solve(int t) {
  int a, b, u, v;
  cin >> a >> b >> u >> v;
 
  unordered_map<int, int> city;
  city[a]++;
  city[b]++;
 
  while (depth(a) > depth(b)) { a = parent[a]; city[a]++; }
  while (depth(b) > depth(a)) { b = parent[b]; city[b]++; }
 
  while (a != b) {
    a = parent[a];
    b = parent[b];
    city[a]++;
    city[b]++;
  }
 
  cout << "Case #" << t << ": ";
  if (city.find(u) != city.end() && city.find(v) != city.end())
    cout << "yes\n";
  else
    cout << "no\n";
}
 
int main() {
  // freopen("input.txt", "r", stdin);
  init();
 
  int t;
  cin >> t;
  for(int i = 1; i <= t; i++)
    solve(i);
}

#include <bits/stdc++.h>
using namespace std;
 
struct Cmp {
  bool operator()(const char* lhs, const char* rhs) const {
    for(int i = 0; i < min(strlen(lhs), strlen(rhs)); i++) {
      if (lhs[i] < rhs[i]) {
        return true;
      } else if (lhs[i] > rhs[i]) {
        return false;
      }
    }
    return strlen(lhs) < strlen(rhs);
  }
};
 
int digitsum(int n) {
  if (n / 10 == 0) { return n; }
  int output = 0;
  while (n) {
    output += n%10;
    n /= 10;
  }
  return digitsum(output);
};
 
int level(char* number) {
  int output = 0;
  for(int i = 0; i < strlen(number)-1; i++) {
    output += abs(number[i]-number[i+1]);
  }
  return digitsum(output);
}
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
   freopen("a1.txt", "r", stdin);
 
  // ofstream output("output.txt");
 
  int t, m, n;
  cin >> t >> n >> m;
 
  for(int _t = 1; _t <= t; _t++) {
    cout << "Case #" << _t << ":\n";
 
    map<int, priority_queue<char*, vector<char*>, Cmp> > group;
    for(int i = 0; i < n; i++) {
      char* number = new char[10];
      cin >> number;
      group[level(number)].push(number);
      // cout << level(number) << endl;
    }
 
    for(int i = 0; i < m; i++) {
      int request;
      cin >> request;
      if (group.find(request) != group.end() && !group[request].empty()) {
        cout << group[request].top() << "\n";
        group[request].pop();
      }
      else {
        cout << "-1\n";
      }
    }
  }
  // output.close();
}

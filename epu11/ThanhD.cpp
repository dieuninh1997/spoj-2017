#include <bits/stdc++.h>
using namespace std;
 
typedef pair<float, float> medicine;
typedef pair<int, int> status;
#define A first
#define B second
 
status operator*(medicine x, status y) {
  return status(x.A * y.A, x.B * y.B);
}
 
bool operator>(medicine x, medicine y) {
  return x.A >= y.A && x.B >= y.B && (x.A != y.A || x.B != y.B);
}
 
bool operator>=(status x, status y) {
  return x.A >= y.A && x.B >= y.B;
}
 
status min(status x, status y) {
  if (x.A < y.A || x.B < y.B)
    return x;  //Warning:...
  else
    return y;
}
 
void solve(int t) {
  cout << "Case #" << t << ": ";
  int MAX, l1, l2, count;
  float a, b, c, d;
 
  cin >> MAX >> l1 >> l2;
  cin >> a >> b >> c >> d;
 
  status limit(MAX, MAX);
  status life(l1, l2);
  medicine med1(a, b);
  medicine med2(c, d);
 
  if (med1.A >= 1 && med2.A >= 1 && life.A != 0 ||
      med1.B >= 1 && med2.B >= 1 && life.B != 0 ||
      !(limit >= life)) {
    cout << "-1\n";
    return;
  }
 
  if (life.A == 0 && life.B == 0) {
    cout << "0\n";
    return;
  }
 
  // count = 0;
  set<status> dp[100][100];
  dp[0][0].insert(life);
 
  for(int i = 1; i <= 100; i++) {
    bool again = false;
    // cout << "HERE\n";
    for(int j = 0; j <= i; j++) {
      int a = j;
      int b = i-j;
 
      if (a-1 >= 0)// && limit >= dp[a-1][b])
      for(set<status>::iterator it = dp[a-1][b].begin(); it != dp[a-1][b].end(); it++) {
        status stt = *it;
 
        status way = med1 * stt;
        if (limit >= way)
          dp[a][b].insert(way);
 
        if (way.A == 0 && way.B == 0) {
          cout << i << '\n';
          return;
        }
      }
 
      if (b-1 >= 0)// && limit >= dp[a][b-1])
      for(set<status>::iterator  it = dp[a][b-1].begin(); it != dp[a][b-1].end(); it++) {
        status stt = *it;
 
        status way = med2 * stt;
        if (limit >= way)
          dp[a][b].insert(way);
 
        if (way.A == 0 && way.B == 0) {
          cout << i << '\n';
          return;
        }
      }
 
      again |= dp[a][b].size() != 0;
    }
    if (!again) break;
  }
  cout << "-1\n";
 
  // cout << count << '\n';
}
 
int main() {
   freopen("input.txt", "r", stdin);
 
  // freopen("D.inp", "r", stdin);
  // freopen("output2.txt", "w", stdout);
  int t;
  cin >> t;
  for(int i = 1; i <= t; i++)
    solve(i);
}

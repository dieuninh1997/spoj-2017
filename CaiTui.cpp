#include <bits/stdc++.h>
using namespace std;

void solve() {
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		cin >> m >> n;
		int *v = new int[n + 1], *w = new int[n + 1], a[101][101] = { 0 }, i, j;
		i = 1;
		while (i <= n){
			cin >> w[i] >> v[i];
			i++;
		}
		w[0] = v[0] = 0;
		for (i = 1; i <= n; i++){
			for (j = 1; j <= m; j++){
				if (j < w[i]){
					a[i][j] = a[i - 1][j];
				}
				else{
					a[i][j] = max(a[i - 1][j], v[i] + a[i - 1][j - w[i]]);
				}
			}
		}
		cout <<"Hey stupid robber, you can get "<< a[n][m] <<"."<< '\n';
	}
}
int main(){
	solve();
	return 0;
}


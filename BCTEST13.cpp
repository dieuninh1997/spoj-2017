#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;

ll a[100000], c = 0;
const ll LIM = 10000000000L;

void gen(ll k) {
	for (ll i=4;i<10;i+=3) {
		ll t = k*10 + i;
		//4 7 
		if (t < LIM) {
			a[c++] = t;
			gen(t);
		}
	}
}

int main() {
	ll l,r;
	cin >> l >> r;
	int k = 0;
	ll res = 0;
	gen(0);
	sort(a,a+c);
	while (l > a[k]) k++;
	while (1) {
		ll cur = a[k];
		if (r < cur) {
			res += cur * (r - l + 1);
			break;
		} else {
			res += cur * (cur - l + 1);
			l = cur+1;
		}
		if (r<l) break;
		k++;
	}
	cout << res;
}


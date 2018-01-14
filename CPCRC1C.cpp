#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

/*digit dp
1 10 = 46 vi 1+2+3+4+5+6+7+8+9+1+0
dp[n,d,k] la so co n chu so, bat dau bang d va co tong cac chu so bang k
Co
dp[0,k,s]=0
dp[1,s,s]=1 voi 0<=s<=9
dp[1,k,s] = 0 voi k<>s hoac 9<s
dp[1,k,s] = 0 voi s<0
dp[d,k,s] = sum {dp[d-1,i,s-k]} voi i chay tu 0 den 9

b1: tinh f[n]=sum{dp[l,i,s]}
l la so luong chu so cua n
i chay tu 0 den d[i]
d[i] la chu so thu i cua n
b2: s=s-d[1]
b3: voi i chay tu 2 den n
voi j chay tu d[i]+1 den 9
f[n]=f[n]-dp[l-i+1, j, s]
s=s-d[i]
*/

ll dp[20][180][2];
ll getDigits(ll x, vector<int> &digit)
{
	while(x)
	{
		digit.push_back(x%10);
		x/=10;
	}
}

ll digitSum(int idx, int sum, int tight, vector<int> &digit)
{
	if(idx==-1)
		return sum;
	if(dp[idx][sum][tight]!=-1 && tight!=1)
		return dp[idx][sum][tight];
	
}
void solve(ll a,ll b)
{
	
}
int main()
{
	ios_base::sync_with_stdio(false);
	ll a,b;
	while(1)
	{
		cin>>a>>b;
		if(a==-1 && b==-1)
			break;
		solve(a,b);
		
	}
	return 0;
}


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
#define mod 1000000007
const int MAX_CHAR = 256;

int solve(string str) {
	//create an array to store index of last
	vector<int> last(MAX_CHAR,-1);
	int n=str.length();
	
	//dp[i] is going to store count of distinct substr of length i
	int dp[n+1];
	
	//empty substr has only one subsequence
	dp[0]=1;
	
	for(int i=0;i<n;i++)
	{
		//number of subsequence with substr str[0...i-1]
		dp[i+1]=(2*dp[i])%mod;
		//if current character has appeared before, then remove all subsequences ending with previous occurence
		if(last[str[i]]>=0)
			dp[i+1]=(dp[i+1]-dp[last[str[i]]] + mod)%mod;
			
		last[str[i]]=i;
		
		
		//mark occurrence of current character
	
	}
	return dp[n];
}
int main(){
	#ifdef NINH
	freopen("input.txt","r",stdin);
	#endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	string s;
    	cin>>s;
		cout<<solve(s)<<endl;	
	}

	return 0;
}
/*s=ABCDEFG

dp[0]=1 chuoi con rong
i=0 subseq: {}, A
i=1 subseq: {},A,B,AB
i=2 subseq: {},A,B,AB,C,AC,BC,ABC 

=> dp[i+1]=2*dp[i];
neu trung
=> DP[i+1] = DP[i+1] - DP[previous[S[i]]];
Previous[i] = Index of prev. occurence of i.
If there is no previous occurence of i, 
then I have initialized it to some negative value.

mod(x) = (x % m + m) % m

*/

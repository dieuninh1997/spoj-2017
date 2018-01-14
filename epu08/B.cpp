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
template <typename T>
  std::string NumberToString ( T Number )
  {
     std::ostringstream ss;
     ss << Number;
     return ss.str();
  }

/*
tu 10^(m-1) den (10^m)-1 co 9.m.(10^m -1) so
m la day thu may trong chuoi
chu so thu k can tim : k=s-n



*/
long pow(long n,long k){
    if(k==0) return 1;
    long t=pow(n,k/2);
    if(k%2==0){
        return t*t;
    }else{
        return t*t*n;
    }
}
void chuso(LL n)
{
	LL dem=0,m=0;
	string s;
	while (dem<=n)
	{
		m++;
    	dem+=9*m*(int)pow(10,m-1);
	}
	cout<<"m="<<m<<endl;
	//xac dinh x la chu so thu may trong chuoi cac chu so co m chu so
	LL x1=n-9*(m-1)*(int)pow(10,m-1-1);
	LL a=(x1-1)/m;//so tu nhien chua x
	LL b=(x1-1)%m;//so thu may trong so tu nhien vua tim dc
//	cout<<"m="<<m<<" x1="<<x1<<" a="<<a<<" b="<<b<<endl;
	
	LL ans=a+(int)pow(10,m-1);
	s=NumberToString(ans);
//	cout<<"s="<<s<<endl;
	cout<<s[b];
}
void solve(){
	int t;
	cin>>t;
	FOR(i,1,t+1)
	{
		LL n;
		cin>>n;
		cout<<"Case #"<<i<<": ";
		if(n>0&&n<10)
			cout<<n;
		else
			chuso(n);
		cout<<endl;
	}
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}




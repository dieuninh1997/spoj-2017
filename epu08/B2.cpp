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

LL count(LL i){
    //dem tat ca cac so co i chu so
    return 9*(LL)pow(10,i-1);
}
char f(LL n)
{
	LL dem=0;
	LL i=1;
	
	while(dem+count(i)*i<n)
	{
		dem+=count(i)*i;
		i++;
	}
	LL start=(dem+1);//vi tri dau tien cua chu so co i chu so
	LL th=(n-start)/i; //thu tu cua so trong day so co i chu so;
	LL nth=th+(LL)pow(10,i-1);//thu tu cua so can tim
	LL index=abs(n-start)%i;//la chi so cua ki tu can tim trong nth
	string s=NumberToString(nth);
	cout<<s[index];
}

void solve(){
	int t;
	cin>>t;
	FOR(i,1,t+1)
	{
		LL n;
		cin>>n;

		cout<<"Case #"<<i<<": ";
		f(n);
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




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

void solve(){
	int t;
	cin>>t;
	FOR(x,1,t+1){
		LL a,b,r;
		cin>>a>>b>>r;
		LL S,Smax;
		Smax=r*r*2;
		S=a*b;
		LL canh=sqrt(2)*r;
		cout<<"Case #"<<x<<": ";
		if(S<=Smax ){
			if(a>canh && b>canh){
				a=b=canh;
			}else {
				if(a>canh){
					a=min(a,(LL)sqrt(4*r*r-b*b));//tiep diem dtr, dgthang
				}
				if(b>canh){
					b=min(b,(LL)sqrt(4*r*r-a*a));	
				}
			}
		}
		else{
			if(a>canh||b>canh){//1 canh dai, 1 canh ngan hon dg kinh dtr
				if(a>canh && 4*r*r-b*b>0){
					a=min(a,(LL)sqrt(4*r*r-b*b));//tiep diem dtr, dgthang
				}else if(b>canh && 4*r*r-a*a>0){
					b=min(b,(LL)sqrt(4*r*r-a*a));	
				}else//2 canh deu ngan
					a=b=canh;
			}else//2 canh deu ngan
				a=b=canh;
		}
		cout<<a*b<<endl;
	}
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
		//		freopen("output.txt","w",stdout);
	#endif
	solve();
	return 0;
}




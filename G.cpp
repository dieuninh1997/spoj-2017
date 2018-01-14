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

void midpoint(int x1,int y1,int x2, int y2){
    //Truong hop 0<m<1 && x1<x2 && y1<y2
    int a,b,x,y,p;
    a=y2-y1;
    b=-(x2-x1);
    y=y1;
    x=x1;
   // putpixel(x,y,color);    //Ve diem pixel dau tien
    p=2*a+b;        //tinh vi tri tuong doi cua diem Midpoint so voi duong thang
    while(x < x2){
        if(p < 0){   
            p+=2*a; // ta chon chon diem yi. nam phia tren dg thang
        }else{      
            y++;
            p+=2*(a+b);//ta chon diem yi +1
        }
        x++;
        cout<<"Pixel (x,y) midpoint = ("<<x<<", "<<y<<")\n";
      //  putpixel(x,y,color);
      //  delay(10);
    }
}
void solve() {
	int x1,y1,r1,x2,y2,r2;
	cin>>x1>>y1>>r1;
	cin>>x2>>y2>>r2;
	midpoint(0,0,x1,y1);
	midpoint(0,0,x2,y2);
}
int main(){
	#ifdef NINH
	//freopen("input.txt","r",stdin);
	#endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	solve();
	return 0;
}


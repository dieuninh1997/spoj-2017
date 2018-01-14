#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
ll ccw(ll xa, ll ya, ll xb,ll yb, ll xc, ll yc) {
  ll ux = xa - xb;
  ll uy = ya - yb;
  ll vx = xc - xb;
  ll vy = yc - yb;
  return ux * vy - uy * vx;
}
void solve()
{
	//ap dung ham ccw -quan he giua cac diem-k.cach
/*
	ll xa,xb,xc,ya,yb,yc;
	cin>>xa>>ya;
	cin>>xb>>yb;
	cin>>xc>>yc;
	ll ab=pow(xa-xb,2)+pow(ya-yb,2);
	ll bc=pow(xb-xc,2)+pow(yb-yc,2);
	ll ac=pow(xa-xc,2)+pow(ya-yc,2);
	if(ab+bc==ac)
	{
		if(ccw(xa, ya, xb,yb,xc,yc) > 0)
		{
			cout<<"RIGHT";
		}else
		{
			cout<<"LEFT";
		}
	}
	else cout<<"TOWARDS";
	*/
	
	long int x1,x2,x3,y1,y2,y3;
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>x3>>y3;
	long int ccw = (x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
	if(ccw > 0){
		cout<<"LEFT";
	}else{
		if(ccw < 0){
		cout<<"RIGHT";
		}else{
			
				cout<<"TOWARDS";
		}
	} 
}
int main()
{
	solve();
	return 0;
}


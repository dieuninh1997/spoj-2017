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
//bfs
/*
them vao queue vtri ban dau (x1,y1,dem), danh dau o nay=1
khi queue chua rong, lay tu queue, data cua quan ma, de thay se co 8 kha nang co the di
gs quan ma dang dung o vtr (u,v)
ta co: 
(u-2, v-1)
(u-2, v+1)
(u+2, v-1)
(u+2, v+1)
(u-1,v-2)
(u-1,v+2)
(u+1,v-2)
(u+1,v+2)
ta se xd duoc 2 mang chenh lech dong, cot nhu sau
int cld[8]={-2,-2,-1,-1,1,1,2,2};
int clc[8]={-1,1,-2,2,-2,2,-1,1};
nhu vay ta se lay duoc dinh ke: 
tdx=u+cld[i]
tdy=v+clc[i]
voi i la chi so cua cac truong hop
thu lan luot ca 8 trg hop
dk de tu 1 dinh co the di den dinh ke cua no la:
-dinh do phai nam trong ban co: 1<=tdx && tdx <=m && 1<=tdy && tdy<=n
-dinh do chua dc di qua: a[tdx][tdy]=0
sau do day vao queue data moi la toa do dinh ke va so buoc di +1
tien hanh ktra (tdx,tdy) co phai diem (x2,y2) ko?
neu phai => end
sau khi queue rong ma van ko tim duoc dg di thi xuat 0
*/

int a[8][8];
int cld[8]={-2,-2,-1,-1,1,1,2,2};
int clc[8]={-1,1,-2,2,-2,2,-1,1};
struct data{
	int x,y,dem;
	data()
	{
		dem=0;
	}
	data(int _x, int _y, int _dem)
	{
		x=_x;
		y=_y;
		dem=_dem;
	}
};
int convert(char c)
{
	switch(c)
    {
    	case 'A':
			return 1;
		case 'B':
			return 2;
		case 'C':
			return 3;
		case 'D':
			return 4;
		case 'E':
			return 5;
		case 'F':
			return 6;
		case 'G':
			return 7;
		case 'H':
			return 8;	    	
	}
}
void solve(){
	
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	//solve();
	int t;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		queue<data> Q;
		int ans=0;
		char x1,x2;
		int y1,y2;
		cin>>x1>>y1;
		cin>>x2>>y2;
		for (int i=1; i<=8; i++)
        	for (int j=1; j<=8; j++)
            	a[i][j]=0;
        
        int _x1=convert(x1);
        int _x2=convert(x2);
        Q.push(data(_x1,y1,0));
        a[_x1][y1]=1;
        
        while(!Q.empty())
        {
        	data tmp=Q.front();
        	Q.pop();
        	for(int i=0;i<8;i++)
        	{
        		int tdx=cld[i]+tmp.x;
        		int tdy=clc[i]+tmp.y;
        		if (1<=tdx && tdx <=8 && 1<=tdy && tdy <=8 && a[tdx][tdy]==0)
            	{
                	a[tdx][tdy]=1;
                	Q.push(data(tdx,tdy,tmp.dem+1));
               		if (tdx==_x2 && tdy==y2)
               	 	{
               	 		ans=tmp.dem+1;
                    	break;
                	}
            	}
			}
			if(ans)
				break;
		}
		cout<<"Case #"<<k<<": "<<ans<<endl;
	}
	return 0;
}




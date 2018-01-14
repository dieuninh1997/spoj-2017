#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

int a[1000005];

void solve()
{
/*
F(0)= 0;

F(2*x) = F(x);

F(2*x+1) = F(x) + 1;

liet ke tat ca ra

*/

	a[0]=0;
	a[1]=1;
	for(int i = 2;i <= 1000000;i++)
	{
		if(i%2 == 0) 
			a[i] = a[i/2];
		else 
			a[i] = a[i/2]+1;
	}
	int n;
	cin>>n;
	int b[n+5];
	int dem = 0;
	for(int i = 0;i < n;i++) 
		cin>>b[i];
	for(int i = 0;i < n-1;i++)
	{
		int b1 = b[i];
		int dem1 = 0;
		while(b1 > 1000000)
		{
			if(b1 %2 != 0) 
				dem1++;
			b1 /= 2;
		}
		for(int j = i+1;j < n;j++)
		{
			int dem2 = 0;
			int b2 = b[j];
			while(b2 > 1000000){
			if(b2 %2 != 0) 
				dem2++;
			b2 /= 2;
		}
		if(a[b1]+dem1 == a[b2] + dem2) 
			dem++;
		}
	}
	cout<<dem<<endl;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}


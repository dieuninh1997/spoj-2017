#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int a[1000001]={0};
void cubefr()
{
	int c;

	//gan 1 cho so ko phai cubefre
	for(int i=2; i<=100; i++)
	{
		c=i*i*i;
		//a[c]=1;
		for(int j=c; j<=1000000;j+=c)
		{
			a[j]=1;
		}
	}
	int k=1;
	for(int i=1; i<=1000000;i++)
	{
		if(!a[i])
			a[i]=k++;
	}
}

void solve()
{
	cubefr();
	int t;
	cin>>t;
	for(int i=1; i<=t;i++)
	{
		int n;
		cin>>n;
		cout<<"Case "<<i;
		if(n==1) cout<<": "<<1<<endl;
		else if(a[n]==1)
		{
			cout<<": Not Cube Free"<<endl;
		}else
		{
			cout<<": "<<a[n]<<endl;
		}
	}


}
int main()
{
	solve();
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve()
{
	int q,x;
	cin>>q;
	while(q--)
	{
	cin>>x;
	int d=0,s=0;
	for(int i=1;;i++)
	{
		if(s>x)
		{
			s-=i;
			d++;
		}else if(s<x)
		{
			s+=i;
			d++;
		}else if(s==x)
		{
			cout<<"\nd="<<d;
			break;
		}
		cout<<"\n"<<s<<" "<<d;
	}
}
	
}
int main()
{
	solve();
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int n,p,q,r;
	cin>>n>>p>>q>>r;
	vector< pair<int,int> >a;
	for(int i=0; i<n;i++)
	{
		int x;
		cin>>x;
		a.push_back(make_pair(x,i));
	}
	sort(a.begin(),a.end());//sort tang theo first-> gia tri 
	int max=0, i,j,k;
	if(r>0)
	{
		k=a[n-1].second;
		max+=r*a[n-1].first;
		
	}else
	{
		k=a[0].second;
		max+=r*a[0].first;
	}
//	cout<<"r="<<r<<",k="<<k<<", max="<<max<<endl;
	//j
	if(q>0)
	{
		j=a[n-1].second;
		if(j<=k)
		{
			max+=q*a[n-1].first;
		}else
		{
			int index=0;
			while(j>k)
			{
				index++;
				j=a[n-1-index].second;
			}
			max+=q*a[n-1-index].first;
		}
	}else
	{
		j=a[0].second;
		int index=0;
		while(j>k)
		{
			index++;
			j=a[index].second;
		}
		max+=q*a[index].first;
	}
	//cout<<"q="<<q<<",j="<<j<<", max="<<max<<endl;
	//i
	if(p>0)
	{
		i=a[n-1].second;
		if(i<=j)
		{
			max+=p*a[n-1].first;
		}else
		{
			int index=0;
			while(i>j)
			{
				index++;
				i=a[n-1-index].second;
			}
			max+=p*a[n-1-index].first;
		}
	}else
	{
		i=a[0].second;
		int index=0;
		while(i>j)
		{
			index++;
			i=a[index].second;
		}
		max+=p*a[index].first;
	}
	//cout<<"p="<<p<<",i="<<i<<", max="<<max<<endl;
	cout<<max;
}
	
	
/*	sort(a,a+n);
	int max=0;
	(p>0)?max+=p*a[n-1]:max+=p*a[0];
	(q>0)?max+=q*a[n-1]:max+=q*a[0];
	(r>0)?max+=r*a[n-1]:max+=r*a[0];
	cout<<max;
*/

		

int main()
{
	solve();
	return 0;
}


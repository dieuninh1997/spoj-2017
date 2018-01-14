#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
#include<map>
void solve()
{
	double a,b,c;
	double t1,t2,x1,x2,x3,x4;
	set<double> s;
	cin>>a>>b>>c;
	if(a==0 && b==0 &&c==0)
	{
	
		cout<<-1;
		return;
	}
	else
	{
		double d=b*b-4*a*c;
		if(d<0)
		{
				cout<<-1;
				return;
		}	
		else if(d>=0)
		{
			if(d==0)
			{
				t1=-b/(2*a);
				t2=t1;
				if(t1<0)
				{
					cout<<-1;
					return;
				}else
				{
					if(t1>=0)
					{
						x1=sqrt(t1);
						x2=-x1;
						s.insert(x1);
						s.insert(x2);
					//	cout<<"\n1) "<<x1<<" "<<x2;
					}
					if(t2>=0)
					{
						x3=sqrt(t2);
						x4=-x3;
							s.insert(x3);
							s.insert(x4);
						//cout<<"\n1) "<<x3<<" "<<x4;
					}
					
				}
			}
			else if(d>0)
			{
				t1=(-b+sqrt(d))/(2*a);
				t2=(-b-sqrt(d))/(2*a);
				if(t1<0)
				{
					cout<<-1;
					return;
				}
				else
				{
						if(t1>=0)
					{
						x1=sqrt(t1);
						x2=-x1;
						s.insert(x1);
						s.insert(x2);
					//	cout<<"\n2) "<<x1<<" "<<x2;
					}
					if(t2>=0)
					{
						x3=sqrt(t2);
						x4=-x3;
							s.insert(x3);
							s.insert(x4);
					//	cout<<"\n2) "<<x3<<" "<<x4;
					}
				}
			}
			
		}
		cout<<s.size();	
	}	
}
int main()
{
	solve();
	return 0;
}

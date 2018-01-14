#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

const int MAX=1001;


void solve()
{
	int n;
	stack<int> s;
	while(cin>>n && n!=0)
	{
		int a[MAX]={0}, temp[MAX];
		while(!s.empty())
			s.pop();   // clear the stack
		for(int i=0; i<n;i++)
			cin>>a[i];
		int j=0,num=0;
		for(j=0;j<n;j++)
		{
			if(a[j]==num+1)
			{
				temp[num++]=a[j];
				continue;
			}
			while(!s.empty() && s.top()==num+1)
			{
				temp[num++]=s.top();
				s.pop();
			}
			s.push(a[j]);
		}	
		
		while(s.size())
		{
			temp[num++]=s.top();
			s.pop();
		}
		int check=0;
		for(int k=0; k<n;k++)
		{
			if(temp[k]!=k+1)
			{
				check=1;
				break;
			}
		}
		cout<<(check==0?"yes":"no")<<endl;
		
	}
}

//5 1 2 4 3
/*
stack : 5 1 2 3 
st.top: 5 
*/
int main()
{
	solve();
	return 0;
}


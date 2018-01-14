#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

queue<int> q;
int parent[20001];
int value[20001];


void bfs(int n)
{
	q.push(1);//start 1
	parent[1]=0;
	while(!q.empty())
	{
		int current=q.front();
		q.pop();
		if(current==0)
		{
			stack<int> s;
			while(parent[current])
			{
				s.push(value[current]);
				current=parent[current];
			}
			s.push(1);
		}
		
	}	
}
void solve()
{
	int k;
	cin>>k;
	while(k--)
	{
		int n;
		cin>>n;
		if(n==1)cout<<1<<endl;
		else if()
		{
			
		}
	}

}
int main()
{
	solve();
	return 0;
}


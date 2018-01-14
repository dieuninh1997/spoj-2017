#include<queue>
#include<climits> //Necessary for INT_MAX
#include<vector>
#include<bits/stdc++.h>
using namespace std;

const int MAX = 300; //max number of nodes

int n; //Number of nodes
int first, last; //first = starting node, last = node toward which we want to know the shortest path
int m_adj[MAX][MAX]={0}; //Adjacence's matrix of the graph. Is it possible to implement a version of the algorithm using an adjacence's list if we want to minimiza the used space and speed up the visit of the adjacents nodes. For the sake of the algorithm, infact, it isn't required a direct access

struct pairComparator
{
	bool operator() (pair<int, int> a, pair<int, int> b)
	{
		return a.second > b.second;
	}
};

void rebuildPath(int previous[], int i, vector<int>& v)
{
    if(previous[i] >= 0) 
        rebuildPath(previous, previous[i], v);
    v.push_back(i);
}

// before you call this function you have to fill global variables n, first, last and m_adj
// it returns a vector, that represents the path from first to last
int dijkstra()
{
	int d[MAX];
	bool done[MAX] = {0};
	priority_queue<pair<int, int>, vector<pair<int, int> >, pairComparator> q;
    int previous[MAX];
	
	for(int i = 0; i < n; i++)
		d[i] = INT_MAX;
	d[first] = 0;

    previous[first] = -1;

	for(int i = 0; i < n; i++)
		q.push(make_pair(i, d[i]));

	while(!q.empty())
	{
		int u = q.top().first;
		q.pop();

		if (done[u]) continue;

		for(int i = 0; i < n; i++)
			if(m_adj[u][i] && d[i] > d[u] + m_adj[u][i])
			{
				d[i] = d[u] + m_adj[u][i];
				q.push(make_pair(i, d[i]));
                previous[i] = u;
			}
	done[u] = true;
	}

    vector<int> path;
    rebuildPath(previous, last, path);

    return path.size();
}

int main()
{
	#if NINH
	freopen("input.txt","r",stdin);
	#endif
	int t,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>first>>last;	
		for(int i=0; i<m;i++)
		{
			int x,y,w;
			cin>>x>>y>>w;
			m_adj[x-1][y-1]=w;
		}
		cout<<dijkstra()<<endl;
	}

	
}

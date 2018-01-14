#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int a[10], s = 0;
    for (int i = 0; i < 10; i++)
        cin>>a[i];
    for (int i = 0; i < 10; i++)
	{
        s += a[i];
        if (s >= 100) 
		{
            s= ((s - 100 <= 100 - (s-a[i]))?s:(s-a[i])); 
            cout<<s<<endl;
            break;
        }
    }
   //cout<<s<<endl;
}
int main()
{
	solve();
	return 0;
}


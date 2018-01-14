#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve()
{
	int n;
	cin>>n;
	while(n--)
	{
		ll k;
		cin>>k;
		string s;
		while(k>=1)
		{
			if(k%2==0)
				s+='6';
			else
				s+='5';
			k--;
			k/=2;
//				cout<<"k="<<k<<" s="<<s<<endl;
		}
		reverse(s.begin(),s.end());
		cout<<s<<endl;
		//bin 0:5 1:6
		
	}
}
int main()
{
	solve();
	return 0;
}


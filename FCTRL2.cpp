#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,k=0,carry=0,arr[1000]={1};
		cin>>n;
		for(i=1;i<=n;i++)
		{
			for(j=0;j<=k;j++)
			{
				arr[j]=arr[j]*i+carry;
				carry=arr[j]/10;
				arr[j]=arr[j]%10;
			}
			while(carry)
             {
                 k++;
                 arr[k]=carry%10;
                 carry/=10;
             }
		}
		for(i=k;i>=0;i--)
           cout<<arr[i];
        cout<<endl;
		
	}
}
int main()
{
	solve();
	return 0;
}


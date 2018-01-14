

#include <iostream>
#define MAX_N 1000
using namespace std;
long long n,m,M;

long long phan_tich_so(long long n)
{
	long long C[MAX_N+1];

	int i, q, k;
	for(i=0; i<=n; i++) C[i] = 1;

	for(q=2; q<n; q++)
		for(i=n; i>=q; i--)
			for(k=1; k<=i/q; k++)
			{
			//	cout<<i/q<<endl;
				C[i] += C[i-k*q];
				cout<<C[i]<<" ";
			}
			
	C[1] = 0;
	return C[n]%M;
}
int main()
{
	cin>>n>>m>>M;
	cout<<phan_tich_so(n)<<endl;
//	system("pause");
}

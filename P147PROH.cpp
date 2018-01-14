#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve()
{
	string s1,s2;
	int dem=0;
	while(cin>>s1>>s2 && s1!="END" && s2!="END")
	{
		
		int a[255]={0},b[255]={0};
		int len1=s1.length();
		int len2=s2.length();
		for(int i=0; i<len1;i++)
			a[s1[i]]++;
		for(int i=0; i<len2;i++)
			b[s2[i]]++;
		
		//memcmp -1 nho, 0 =, 1 lon hon
		cout<<"Case "<<++dem<<": "<<(memcmp(a,b,sizeof(a))?"different" : "same")<<endl;
	}

}
int main()
{
	solve();
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

int getIndex(int i, int press, int len)
{
	int a=i-press%len;
	if(a<0)
		a+=len;
	if(a>len-1)
		a-=(len-1);
	return a;
}

void solve()
{
	string l1="abc";
	string l2="def";
	string l3="ghi";
	string l4="jkl";
	string l5="mno";
	string l6="pqrs";
	string l7="tuv";
	string l8="wxyz";
	string s;

	while(cin>>s&&s!="#")
	{
//		cout<<s<<endl;
		int n=s.length();
		int a[n+5]={0};
		for(int i=0; i<n;i++)
		{
			if(s[i]>64 &&s[i]<91)//chu hoa-> chu thuong
			{
				s[i]+=32;
				a[i]-=32;
			}
			else
			{
				a[i]=0;
			}
		}
//		cout<<s<<endl;
		for(int i=0; i<n;i++)
		{
//			cout<<"\ns[i]="<<s[i];
			for(int j=0; j<4;j++)
			{
				if(j<3 && s[i]==l1[j])
				{
					s[i]=l1[getIndex(j,i+1,3)];
					s[i]+=a[i];
//					cout<<" line1:"<<s[i];
					break;
				}else if(j<3 && s[i]==l2[j])
				{
					s[i]=l2[getIndex(j,i+1,3)];
					s[i]+=a[i];
//					cout<<" line2:"<<s[i];
					break;
				}
				else if(j<3 && s[i]==l3[j])
				{
					s[i]=l3[getIndex(j,i+1,3)];
					s[i]+=a[i];
//					cout<<" line3:"<<s[i];
					break;
				}
				else if(j<3 && s[i]==l4[j])
				{
					s[i]=l4[getIndex(j,i+1,3)];
					s[i]+=a[i];
//					cout<<" line4:"<<s[i];
					break;
				}else if(j<3 && s[i]==l5[j])
				{
					s[i]=l5[getIndex(j,i+1,3)];
					s[i]+=a[i];
//					cout<<" line5:"<<s[i];
					break;
				}else if(j<3 && s[i]==l7[j])
				{
					s[i]=l7[getIndex(j,i+1,3)];
					s[i]+=a[i];
//					cout<<" line7:"<<s[i];
					break;
				}else if(s[i]==l6[j])
				{
					s[i]=l6[getIndex(j,i+1,4)];
					s[i]+=a[i];
//					cout<<" line6:"<<s[i];
					break;
				}else if(s[i]==l8[j])
				{
					s[i]=l8[getIndex(j,i+1,4)];
					s[i]+=a[i];
//					cout<<" line8:"<<s[i];
					break;
				}
				
			}
//				cout<<s[i]<<endl;
		}
		cout<<s<<endl;
		
	}
}
int main()
{
	solve();
	return 0;
}


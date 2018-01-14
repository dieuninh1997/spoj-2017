#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,c,s,vt=1,x;
	map<int,int>Map;
	cin>>n>>c>>s;
	Map[1]=1;
	for(int i=0;i<c;i++){
		cin>>x;
		vt=vt+x;
		if(vt<=0)
			vt=n;
		if(vt>n)
			vt=1;	
		Map[vt]++;	
	}
	cout<<Map[s];
}

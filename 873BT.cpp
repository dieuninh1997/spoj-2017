#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
void solve(string s, int n)
{
	map<int, int> hM;
 
    int sum = 0;    //so luong
    int max_len = 0;
 	int arr[n];
	for(int i=0;i<n;i++)
 	{
 		arr[i]=s[i]-'0';
	}
    for (int i = 0; i < n; i++)
        arr[i] = (arr[i] == 0)? -1:1;//thay 0 bang -1

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
      
        if (sum == 0)
            max_len = i + 1;
         // cout<<sum<<" "<<sum+n<<" "<<endl;
         map<int,int>::iterator it = hM.find(sum+n);
         map<int,int>::iterator et = hM.end();
         cout<<"end "<<et->first<<" "<<et->second<<endl;
         cout<<sum<<" "<<sum+n<<" "<<it->first<<" "<<it->second<<endl;
        // update max_len
        if (hM.find(sum + n) != hM.end())
        {
            if (max_len < i - hM[sum + n])
            {
                max_len = i - hM[sum + n];
            }
        }
        else // Else put this sum in hash table
            hM[sum + n] = i;
    }
    cout<< max_len;
}
int main()
{
	string s;
	int n;
	cin>>n;
	cin>>s;
	solve(s,n);
	return 0;
}


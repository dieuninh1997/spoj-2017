#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)

//tinh toan so lon
int stringToNum(char c)
{
	return c-'0';
}
char numToString(int n)
{
	return (char)(n+48);
}

void chuanHoa(string &a, string &b)
{
	 int l1 = a.length(), l2 = b.length();
    if (l1 >= l2)
    {
        b.insert(0, l1-l2, '0');    // chen vao dau cua b cac ky tu '0'
    }
    else
    {
        a.insert(0, l2-l1, '0');    // chen vao dau cua a cac ky tu '0'
    }
}

string sum(string a, string b)  // tong 2 so
{
    string s = "";
    chuanHoa(a,b);      // chuan hoa
    int l = a.length();
     
    int temp = 0;
    for (int i=l-1; i>=0; i--)   // duyet va cong
    {
        temp = stringToNum(a[i]) + stringToNum(b[i]) + temp;    // tinh tong tung doi mot
        s.insert(0,1,numToString(temp%10));         // gan phan don vi vao
        temp = temp/10;     // lay lai phan hang chuc
    }
    if (temp>0)  // neu hang chuc > 0 thi them vao KQ
    {
        s.insert(0,1,numToString(temp));
    } 
    return s;
}

string sub(string a, string b)
{
	string s = "";
    chuanHoa(a,b);      
    int l = a.length();
     
    int temp = 0;
    for (int i=l-1; i>=0; i--)   
    {
        temp = stringToNum(a[i]) - (stringToNum(b[i]) + temp);    
        
		if(temp<0)
		{
			temp+=10;
			s.insert(0,1,numToString(temp));  
			temp=1;
		}else
		{
			s.insert(0,1,numToString(temp));
			temp=0;  
		}
          
    }
    int i=0;
    while(s[i]=='0')
    	i++;
    
    s=s.substr(i);
    return s;
}
void solve()
{
	int n=10;
	while(n--)
	{
		string a,b;
		cin>>a>>b;
		string tong=sum(a,b);
		int i=1,r=0;
		string ans="";
		if(stringToNum(tong[0]) < 2)
		{
			i=2;
			ans+=numToString((10*stringToNum(tong[0])+stringToNum(tong[1]))/2);
			r=(10*stringToNum(tong[0])+ stringToNum(tong[1]))%2;

		}else{
			ans += numToString(stringToNum(tong[0])/2);
			r = stringToNum(tong[0])%2;
		}
		while(i < tong.length()){
			ans += numToString((r*10+stringToNum(tong[i]))/2);
			r = (r*10+stringToNum(tong[i]))%2;
			i++;
		}
		cout<<ans<<"\n"<<sub(ans,b)<<endl;
	}
}
int main()
{
	solve();
	return 0;
}


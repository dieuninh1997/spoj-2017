#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
/*
xet i se nhin thay ai phia trc
xet j <i
-neu j cao hon tat ca nhung ng phia trc j => i ko nhin thay nhung ng phai trc j
-neu j ko cao hon tat ca nhung ng phia trc j => se ton tai ng dung truoc j va
cao nhat tu vi tri 1 den i-1 va nguoi i se nhin thay ng nay va ko nhin thay nhung ng o trc nguoi nay

-nx: neu j cao nhat [1,j] thi ng sau j se ko nhin thay tat ca moi ng dung trc j
 => stack luu chi so day ng
 luon duy tri stack o trang thai giam dan theo chieu co cua moi ng tu day len dinh
 
 xet pt a[i]
 a[i]<a[stack[top]] thi nap i vao stack, kq=kq+1
 a[i]=a[stack[top]] thi dem tan so xh cua a[i] va tinh kq
 a[i]>a[stack[top]] thi loai cac pt o dinh stack cho den khi a[i]<=a[stack[top]], trong qt loai cac pt 
 o dinh thi tang kq
  
  
vd 2 4 1 2 2 5 1
top=1, stack[1]=a[1]=2, b[1]=1
xet a[2]>stack[1] => kq++
top=1, stack[1]=a[2], b[1]=1
xet a[3]<stack[1] , top++, kq++, top=2, stack[2]=a[3]=1, b[2]=1
top=2
xet a[4]>stack[2], kq++, top--
top=1
xet a[4] <stack[1], kq++, top--, top=0
top++, top=2, stack[2]=a[4]=2, 

*/


ll kq, s[500005], a[500005], b[500005];
void solve()
{
	int n,i,j,top,t;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	top=1;
	s[top]=a[1];//day ng 1 vao stack
	b[top]=1;// so lan xh
	kq=0;
	for(i=2; i<=n;i++)
	{
		t=1;
		while(top>0 && a[i]>=s[top])
		{
			kq+=b[top];
			if(a[i]==s[top])
				t+=b[top];
			top--;
		}
		if(top>0)
			kq++;
		top++;
		s[top]=a[i];
		b[top]=t;
	}
	cout<<kq;
}
int main()
{
	solve();
	return 0;
}



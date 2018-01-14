#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORI(i,b,a) for(int i=b;i>=a;--i)
ll dem;
void merge(int a[], int left, int mid, int right)
{
	int temp[200005];//mang tam de sx
	int i=left;///vi tri phan tu dau tien cua mang con ben trai
	int j=mid+1; //vi tri phan tu dau tien cua mang con ben phai
	int k=0;
	
	while((i<=mid) && (j<=right))
	{
		//i < j mà a[i] > a[j]
		//ktra phan tu cua mang con ben trai va ben phai
		if(a[i]>a[j])
		{
			//copy phan tu ben trai vao mang tam
			temp[k++]=a[i];
			i++;
			dem+=(right-j+1);
		}else
		{
			temp[k++]=a[j];
			j++;
			
		}
	}
	
	while(i<=mid)
	{
		temp[k++]=a[i++];
	}
	while(j<=right)
	{
		temp[k++]=a[j++];
	}
		
	for(i=0; i<k;i++)
	{
		a[i+left]=temp[i];
		//chep mang tam vao mang chinh
	}
}

void mergeSort(int a[], int left, int right)
{
	int mid;
	if(right>left)
	{
		mid=(left+right)/2;
		mergeSort(a,left,mid);
		mergeSort(a,mid+1,right);
		merge(a,left,mid,right);
	}
}
void solve()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		dem=0;
		for(int i=0; i<n;i++)
			cin>>a[i];
		mergeSort(a, 0, n-1);
		cout<<dem<<endl;
	}
}
int main()
{
	solve();
	return 0;
}


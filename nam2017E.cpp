#include <bits/stdc++.h>
#define MAX 1000
using namespace std;
int mat[1000][1000];
void check(int arr[][MAX], int N, int M)
{
    // Initializing as both horizontal and vertical
    // symmetric.
    int horizontal = 0, vertical = 0;

    // Checking for Horizontal Symmetry.  We compare
    for (int i=0, k=N-1; i<N/2; i++, k--)
    {
        // Checking each cell of a column.
        for (int j=0; j<M; j++)
        {
            // check if every cell is identical
            if (arr[i][j] != arr[k][j])
            {
                horizontal ++;
               // break;
            }
        }
    }
/*
	2 4
	29 10 10 29
	29 19 20 17
	
	n=2 ,n/2=1, i=0-> 0, k=1, i++, k--
	j=0 -> 3
	a[0][0] a[1][0]

	i=0, k=3, i=0->1
	j=0->1
	

*/
    // Checking for Vertical Symmetry.  We compare
    for (int i=0, k=M-1; i<M/2; i++, k--)
    {
        // Checking each cell of a row.
        for (int j = 0; j < N; j++)
        {
            // check if every cell is identical
            if (arr[i][j] != arr[k][j])
            {
                vertical ++;
                //break;
            }
        }
    }
	
  // 	cout<<"c="<<vertical<<" h="<<horizontal;
   	cout<<min(vertical,horizontal);
}

// Driven Program
int main()
{

  	int n,m;
	cin>>n>>m;
//	cout<<n<<" "<<m<<endl;
	
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<m;j++)
		{
	//		cout<<"nhap a["<<i<<"]["<<j<<"]=";
		//	fflush(stdin);
			cin>>mat[i][j];
		}
	}

    check(mat, n, m);

    return 0;
}

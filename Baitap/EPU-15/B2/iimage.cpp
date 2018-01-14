#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int m,n,i,j;
long a[252][252];    
void nhap()
{
    ifstream fi("iimage.inp");
        fi >> m >> n;
        for (i=0;i<=m+1;i++)
            for (j=0;j<=n+1;j++)
                a[i][j]=0;
        for (i=1;i<=m;i++)
            for (j=1;j<=m;j++)
                fi >> a[i][j];
    fi.close();    
}

void xuly()
{
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++)
            a[i][j]=a[i-1][j]+a[i][j-1]-a[i-1][j-1]+a[i][j];     
}

void ghi()
{
    ofstream fo("iimage.out");
        for (i=1;i<=m;i++)
        {
            for (j=1;j<=m;j++) fo << a[i][j] << " ";
            fo << endl;
        }
    fo.close();    
}

int main (int argc, char *argv[])
{
    nhap();
    xuly();
    ghi();    
}

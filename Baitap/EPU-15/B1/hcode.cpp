#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

struct ch
{
    char s[17];    
};
int n,i,j,kq,kq1;
ch c[501];

void nhap()
{
    ifstream fi("hcode.inp");
        fi >> n;
        for (i=1;i<=n;i++)
            fi >> c[i].s;
    fi.close();
}

bool kt(char x[17], char y[17])
{
    int dx,dy;
    dx=strlen(x);
    dy=strlen(y);
    int i,j,k=0;
    bool kn;
    for (i=0;i<=dx-1;i++)
    {
        kn=false;
        for (j=k;j<=dy-1;j++)
            if (y[j]==x[i])
            {
                k=j+1;
                kn=true;
                break;   
            }
        if (kn==false) break;
    }
    if (kn==false) return false;
    else return true;
}

void xuly()
{
    kq=1;
    for (i=1;i<=n-1;i++)
    {
        for (j=i+1;j<=n;j++)
        {
            bool knn;
            if (strlen(c[i].s)<strlen(c[j].s)) knn=kt(c[i].s,c[j].s);
            else knn=kt(c[j].s,c[i].s);
            if (knn==true)
            {
                kq=0;
                kq1=i;
                break;
            }
        }
        if (kq==0) break;
    }
}

void ghi()
{
    ofstream fo("hcode.out");
        if (kq==0)
        {
            fo << kq << endl;
            fo << kq1;
        }
        else fo << kq;
    fo.close();
}


int main(int argc, char *argv[])
{
    nhap();
    xuly();
    ghi();    
}

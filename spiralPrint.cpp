#include<iostream>
using namespace std;
int main()
{
    int a[4][4];
    cout<<"Enter elements  ";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
    }
    int t,b,l,r;
    t= 0, b= 4, l=0,r=4;
    while(t<b&&l<r)
    {
        for(int i=l;i<r;i++)
        {
            cout<<a[t][i]<<" ";
        }
        for(int i=t+1;i<b;i++)
        {
            cout<<a[i][r-1]<<" ";
        }
        for(int i=r-2;i>=l;i--)
        {
            cout<<a[b-1][i]<<" ";
        }
        for(int i=b-2;i>t;i--)
        {
            cout<<a[i][t]<<" ";
        }
        l++; r--; t++; b--;
    }
}

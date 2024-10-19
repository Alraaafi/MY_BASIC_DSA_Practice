#include<iostream>
using namespace std;
//only for positive intiger

int main()
{
    int a[12] = {3,4,1,6,2,4,9,7,8,4,2,1};
    int i,j,mx=a[0];

    for(i=0; i<12; i++)
    {
        if(mx<a[i])
            mx = a[i];
    }

    int counting[mx+1]={0};

    for(i=0; i<12; i++)
        counting[a[i]]++;

    for(i=0; i<=mx; i++)
    {
        for(j=1; j<=counting[i]; j++)
        {
            cout<<i<<" ";
        }
    }


}



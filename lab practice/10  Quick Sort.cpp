#include<bits/stdc++.h>
using namespace std;

int n;

void dis(int *A)
{
    cout<<"NOW ARRAY :  ";
    for(int i=0; i<n; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

int part(int *A,int l,int r )
{
    int i,j,v,tmp,pvt;

    pvt = A[l];
    i = l;
    j = r;

    do
    {
        do{ i++; } while( pvt >=A[i] );
        do{ j--; } while( pvt < A[j] );

        if(i<j)
            swap(A[i],A[j]);
    }
    while(i<j);

    swap(A[j],A[l]);
    return j;
}

void QS(int *A, int l, int r)
{
    if(l<r)
    {
        int p = part( A, l, r );

        QS(A,l,p);
        QS(A, p+1, r);
    }
}

int main()
{
    cout<<"Enter Size of Array: ";
    cin>>n;
    int A[n+1];
    int i;

    cout<<"Please Give Elements: ";
    for(i=0; i<n; i++)
        cin>>A[i];

    dis(A);

    //A[n] = INT_MAX;

    QS(A,0,n);
    dis(A);

    getchar();
}

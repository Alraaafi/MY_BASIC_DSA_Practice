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

void mrg( int *A, int l, int m, int r )
{
    int i,j,k;
    int tmp[n+7];
    i = l;
    j = m+1;
    k = l;

    while(i<=m && j<=r)
    {
        if(A[i] >= A[j]) tmp[k++] = A[j++];
        else tmp[k++] = A[i++];
    }

    while(i<=m) tmp[k++] = A[i++];
    while(j<=r) tmp[k++] = A[j++];

    for(i=l; i<=r; i++)
        A[i] = tmp[i];
}

void mergeS(int *A, int l, int r)
{
    if(l<r)
    {
        int m = (l+r)/2;

        mergeS(A,l,m);
        mergeS(A,m+1,r);

        mrg(A,l,m,r);
    }
}

int main()
{
    cout<<"Enter Size of Array: ";
    cin>>n;
    int A[n];
    int i;

    cout<<"Please Give Elements: ";
    for(i=0; i<n; i++)
        cin>>A[i];

    dis(A);

    mergeS(A,0,n-1);
    dis(A);

    getchar();
}

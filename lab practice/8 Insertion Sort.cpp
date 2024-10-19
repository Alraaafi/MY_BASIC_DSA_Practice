#include<bits/stdc++.h>
using namespace std;

#define mx 5
int n;

void dis(int *A)
{
    cout<<"NOW ARRAY :  ";
    for(int i=0; i<n; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

void insertionS( int *A )
{
    int i,j,blank,v;

    for(i=0; i<n; i++)
    {
        v = A[i];
        blank = i;
        while( blank>0 &&  A[blank-1]>v )
        {
            A[blank] = A[blank-1];
            blank--;
        }

        A[blank] = v;
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

    insertionS(A);
    dis(A);

    getchar();
}

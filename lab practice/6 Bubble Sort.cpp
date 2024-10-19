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

void bubbleS( int *A )
{
    int i,j,t=0;

    for(i=0; i<n-1; i++)
    {
        t = 0;
        for(j=0; j<n-1-i; j++)
        {
            if( A[j] > A[j+1] )
                {
                    swap(A[j],A[j+1]);
                    t = 1;
                }
        }
        if(t==0)
            break;
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

    bubbleS(A);
    dis(A);

    getchar();
}

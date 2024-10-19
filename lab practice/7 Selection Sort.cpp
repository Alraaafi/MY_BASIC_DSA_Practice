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

void selectionS( int *A )
{
    int i,j,t=0;

    for(i=0; i<n; i++)
    {
        int in = i;
        for(j=i+1; j<n; j++)
        {
            if(A[j] < A[in] )
                in = j;
        }
        swap(A[i], A[in]);
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

    selectionS(A);
    dis(A);

    getchar();
}

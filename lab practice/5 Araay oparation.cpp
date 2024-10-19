#include<bits/stdc++.h>
using namespace std;

#define mx 5
int A[mx];
int len = 0;

void dis()
{
    for(int i=0; i<len; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

void appned(int x)
{
    if(len==mx)
    {
        cout<<"FULL"<<endl;
        return;
    }

    A[len] = x;
    len++;
}


int leng()
{
    return len;
}

void inst(int x, int in)
{
    int i;
    if(len==mx)
    {
        cout<<"FULL"<<endl;
        return;
    }

    for(i=len; i>in; i--)
    {
        A[i] = A[i-1] ;
    }

    A[in] = x;
    len++;

}

int delt(int in)
{
    if( len==0 )
    {
        cout<<"empty"<<endl;
        return -1;
    }

    int x = A[in];

    for(int i=in; i<len-1; i++)
    {
        A[i] = A[i+1];
    }
    len--;

    return x;
}

int maxi()
{
    int i,m = 0;

    for(i=0; i<len; i++)
    {
        if(m<A[i])
            m = A[i];
    }

    return m;
}

void rev()
{
    int i=0,j=len-1;

    while(i<j)
    {
        int t = A[i];
        A[i] = A[j];
        A[j] = t;
        i++;
        j--;
    }
}

int main()
{
    appned(10);
    appned(20);
    appned(40);
    dis();
    cout<<"LENGTH: "<<leng()<<endl;

    inst(70,0);
    inst(50,4);
    inst(90,2);
    dis();


    cout<<endl<<endl;

    delt(1);
    cout<<"DLETE of index "<<2<<"  is: "<<delt(2)<<endl;
    dis();

    cout<<endl<<endl;

    cout<<"Maximum is " <<maxi()<<endl;

    cout<<endl<<endl;

    rev();
    dis();

    getchar();
}

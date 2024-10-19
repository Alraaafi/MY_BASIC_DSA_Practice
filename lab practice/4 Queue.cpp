#include<bits/stdc++.h>
using namespace std;

#define mx 3
int A[mx];
int f=0, t=0, e = 0;

bool full()
{
    return e==mx;
}

bool emp()
{
    return e==0;
}

void enq(int x)
{
    if( full() )
    {
        cout<<"FULL!"<<endl;
        return ;
    }

    A[t] = x;
    t = (t+1)%mx;
    e++;
}

int deq()
{
    if(emp())
    {
        cout<<"Empty!"<<endl;
        return -1;
    }
    int x;
    x = A[f];
    A[f] = -1;
    f = (f+1)%mx;
    e--;
    return x;
}

void dis()
{
    for(int i=0; i<mx; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

int main()
{
    enq(10);
    enq(20);
    enq(30);
    dis();
    enq(40);
    dis();


    cout<<"value: "<<deq()<<endl;
    dis();
    cout<<"value: "<<deq()<<endl;
    dis();
    enq(50);
    dis();
    cout<<"value: "<<deq()<<endl;
    cout<<"value: "<<deq()<<endl;
    cout<<"value: "<<deq()<<endl;
    enq(100);
    dis();
    cout<<"value: "<<deq()<<endl;

}

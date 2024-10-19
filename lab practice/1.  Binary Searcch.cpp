#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[11] = {2 , 5, 7, 9, 11, 16, 20, 23, 30, 50};
    int n = 10;

    int l,r,mid;

    l = 0;
    r = 9;

    int x = 50 ;
    int f = -1;

    while(l<=r)
    {

        mid  = (l+r)/2;

        if( x == arr[mid] )
        {
            f = mid;
            break;
        }
        else if( x < arr[mid] )
        {
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    f==-1 ? cout<<"NOT Found!"<<endl : cout<<"YES! Founded. That index and value is : "<<f+1<<", "<<arr[f]<<endl;
}

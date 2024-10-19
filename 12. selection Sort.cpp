#include<iostream>
using namespace std;
int main()
{
    int arr[10]={9,8,7,6,5,4,3,2,1,69};

    int i,j,min,tmp,idx;

    for(i=0; i<10-1; i++)
    {
        //arr[idx] = arr[i];
        idx  = i;
        for(j=i; j<10-1; j++)
        {
            if(arr[idx]>arr[j])
            {
                 //min=arr[j];
                 idx = j;
            }

        }

        tmp = arr[idx];
        arr[idx] = arr[i];
        arr[i] = tmp;
    }

    //Printing............
    for(j=0; j<10; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
}

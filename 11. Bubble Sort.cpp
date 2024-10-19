#include<iostream>
using namespace std;
int main()
{
    int arr[10]={9,8,7,6,5,4,3,2,1,69};

    int i,j,tmp,flag;

    for(i=0; i<10-1; i++)
    {
        flag = 0;
        for(j=0; j<10-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                flag++;
            }
        }
        if(flag==0)
            break;
    }

    //Printing............
    for(j=0; j<10; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
}

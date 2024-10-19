#include<iostream>
using namespace std;
int main()
{
    int arr[10]={9,8,7,6,5,4,3,2,1,69};

    int i,j,value,holex;

    for(i=0; i<10; i++)
    {
        value = arr[i];
        holex = i;

        while(holex>0 && value<arr[holex-1])
        {
            arr[holex] = arr[holex-1];
            holex--;
        }
        arr[holex]  = value;
    }

    //Printing............
    for(j=0; j<10; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
}

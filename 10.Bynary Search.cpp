#include<iostream>
using namespace std;
int main()
{
    int arr[10]={3, 7, 8, 32, 51, 55, 57, 89, 91, 99};

    int item = 55;
    int left,right,mid,index;

    left = 0;
    right= 9;
    index = -1;
    while(left<=right)
    {
        //cout<<left<<","<<right<<endl;
        mid = (left+right)/2;

        if(arr[mid]==item)
            {
                index =  mid;
                break;
            }
        else if(item<arr[mid])
            right = mid -1;
        else if(item>arr[mid])
            left = mid+1;

        //mid = (left+right)/2;
    }
    if(index==-1)
        cout<<"NOT EXIST!"<<endl;
    else
    {
        cout<<"value Is Found!\nThe index is: "<<index+1<<endl;
        cout<<"Value is: "<<arr[index]<<endl;
    }
}

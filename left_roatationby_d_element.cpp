#include<iostream>
using namespace std;
void left_roatation(int arr[],int size,int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];

    }
    for(int i=d;i<size;i++)
    {
        arr[i-d]=arr[i];
    }
    
    for(int i=0;i<d;i++)
    {
        arr[size-d+i] = temp[i];
    }


    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }


}

int main()
{
    int d;
    cin>>d;
    int arr[]={1,2,3,4,5};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    left_roatation(arr,size,d);
    return 0;
}
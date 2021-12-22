#include<iostream>
using namespace std;
void sol(int arr[],int size)
{
    int curr=arr[0],trap=0,lmax[size],rmax[size];
    lmax[0]=arr[0];
    for(int i=1;i<size;i++)
    {
        lmax[i]=max(lmax[i-1],arr[i]);
    }

    rmax[size-1]=arr[size-1];
    for(int i=size-2;i>=0;i--)
    {
        rmax[i]=max(rmax[i+1],arr[i]);
    }


    for(int i=1;i<size-1;i++)
    {
            
            trap=trap+(min(rmax[i],lmax[i])-arr[i]);
    }
    cout<<trap;
}
int main()
{
    int arr[]={5,0,6,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    sol(arr,size);
}

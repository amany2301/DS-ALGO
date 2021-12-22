#include<stdio.h>
#include<iostream>
using namespace std;
void maxsubarr(int arr[],int size)
{
    int curr=1,res=1;
    for(int i=1;i<size;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0)||(arr[i]%2!=0&&arr[i-1]%2==0))
        {
            curr++;
            res=max(res,curr);

        }
        else
            curr=1;
    }
    cout<<res;
    
}
int main()
{
    int arr[]={5,10,20,6,3,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    maxsubarr(arr,size);
}
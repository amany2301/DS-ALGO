#include<bits/stdc++.h>
using namespace std;

void leader_array(int arr[],int size)
{
    int leader_element=arr[size-1];
    cout<<leader_element<<" ";
    for(int i=size-2;i>=0;i--)
    {
        if(arr[i]>leader_element)
        {
            leader_element=arr[i];
            cout<<leader_element<<" ";
            
        }
    }

}
int main()
{
    int arr[]={7,10,4,10,6,5,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    leader_array(arr,size);
    return 0;

}
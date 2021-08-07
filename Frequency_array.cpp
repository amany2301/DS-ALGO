#include<bits/stdc++.h>
using namespace std;

void frequency_sorted(int arr[],int size)
{
    int curr=0,frequency=1,j=0;

    
    for(int i=1;i<=size;i++)
    {
        if(arr[curr]==arr[i])
            frequency++;

        else
        {
            cout<<arr[i-1]<<"  "<<frequency<<endl;
            frequency=1;
        }
        curr++;
    }
    
}

int main()
{
    int  arr[]={10,10,10,25, 30, 30 ,30,20};
    int size = sizeof(arr)/sizeof(arr[0]);
    frequency_sorted(arr,size);

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key;
    cout<<"Enter number of elements=";
    cin>>n;
    int arr[n];
    cout<<"Enter elements=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=1;j<n;j++)
    {
        key=arr[j];
        int i=j-1;
        while(i>=0&&arr[i]>key)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
    cout<<"Sorted array=";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


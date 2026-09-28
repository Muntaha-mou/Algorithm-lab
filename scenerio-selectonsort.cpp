#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100],temp;
    cout<<"Total number of elements=";
    cin>>n;
    cout<<"Elements in the array=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
         int min_idx=i;
         for(int j=i+1;j<n;j++)
         {
             if(arr[min_idx]>arr[j])
             {
                 min_idx=j;
             }
         }
         temp=arr[min_idx];
         arr[min_idx]=arr[i];
         arr[i]=temp;

    }
    cout<<"sorted array="<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;

}

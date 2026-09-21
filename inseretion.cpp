#include<bits/stdc++.h>
using namespace std;
int main()
{
      int arr[]={2,1,3,5,4};
      int n=5,temp;
      for(int i=1;i<n;i++)
      {
          for(int j=i;j>0;j--)
          {
              if(arr[j-1]>arr[j])
              {
                  temp=arr[j];
                  arr[j]=arr[j-1];
                  arr[j-1]=temp;
              }
              else
                break;
          }
      }
      cout<<"Sorted array=";
      for(int i=0;i<n;i++)
      {
          cout<<arr[i]<<" ";
      }
      return 0;
}

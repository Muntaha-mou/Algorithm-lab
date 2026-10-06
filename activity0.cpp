#include<bits/stdc++.h>
using namespace std;
struct activity
{
    int start;
    int finish;
};
bool compare(activity a,activity b)
{
   return a.finish<b.finish;
}
int main()
{
    int n;
    cout<<"Enter number of activities"<<endl;
    cin>>n;
    activity arr[n];
    cout<<"Enter start and finish times"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].start>>arr[i].finish;
    }
    sort(arr,arr+n,compare);
    cout<<"Selected activities"<<endl;
    int lastfinish=arr[0].finish;
    cout<<"{"<<arr[0].start<<"'"<<arr[0].finish<<"}";
    for(int i=1;i<n;i++)
    {
        if(arr[i].start>=lastfinish)
        {
            cout<<"{"<<arr[i].start<<","<<arr[i].finish<<"}";
            lastfinish=arr[i].finish;
        }
    }
    return 0;
}

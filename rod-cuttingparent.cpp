
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter length=";
    cin >> n;

    int price[n];

    cout << "Enter price for each length=";
    for(int i = 0; i < n; i++)
    {
        cin >> price[i];
    }

    int dp[n+1];
    int parent[n+1];

    dp[0] = 0;
    parent[0] = 0;

    for(int i = 1; i <= n; i++)
    {
        int maxprofit = 0;

        for(int j = 1; j <= i; j++)
        {
            if(price[j-1] + dp[i-j] > maxprofit)
            {
                maxprofit = price[j-1] + dp[i-j];
                parent[i] = j;
            }
        }

        dp[i] = maxprofit;
    }

    cout << "\nMaximum Profit:\n";
    for(int i = 1; i <= n; i++)
    {
        cout << "Length " << i << " is " << dp[i] << endl;
    }

    cout << "\nParent Array:\n";
    for(int i = 1; i <= n; i++)
    {
        cout << "parent[" << i << "] = " << parent[i] << endl;

    }
       cout << "\nPieces used for length " << n << ":\n";
    int len = n;
    while(len > 0)
    {
        cout << parent[len] << " ";
        len = len - parent[len];
    }

    cout << "\nMaximum Profit = " << dp[n] << endl;

    return 0;
}

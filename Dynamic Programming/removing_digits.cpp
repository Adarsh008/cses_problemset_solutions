#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin>>n;
    vector<int>dp(n+1,1e9);
    dp[0]=0;
    for (int i = 1; i <=n; i++) //scroll through the array
    {
        int temp = i;
        while (temp!=0)
        {
            int x = temp%10;
            dp[i]=min(dp[i],dp[i-x]+1);
            temp = temp/10;
        }
        
        
    }
    cout<<dp[n];
    return 0;
}
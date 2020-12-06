#include<bits/stdc++.h>
using namespace std;

int main(void){
    int w,h;
    cin>>w>>h;
    vector<vector<int>> dp(w+1,vector<int>(h+1));
    for(int i =0;i<=w;i++){ 
        //going through all possible widhts
        for (int j = 0; j<=h; j++)
        {
        //going through all possible
            if(i==j){
                dp[i][j]=0;
            }else{
                dp[i][j]=1e9;
                for (int k = 0; k < i; k++)
                {
                    dp[i][j]=min(dp[i][j],dp[k][j]+dp[i-k][j]+1);
                }
                for (int k = 0; k < j; k++)
                {
                    dp[i][j] = min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
                }
                
            }

        }
        
    }
    cout<<dp[w][h];
}
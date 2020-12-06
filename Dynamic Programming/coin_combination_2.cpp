#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main(void){
    int no_of_coins,target;
    cin>>no_of_coins>>target;
    int prices[no_of_coins+1];
    for (int i = 1; i <=no_of_coins; i++)
    {
        cin>>prices[i];
    }

    int dp[no_of_coins+1][target+1];
    
    for (int i = 1; i <=no_of_coins; i++)//go through coins
    {
        for (int sum = 0; sum <=target; sum++)//each sum
        {
           if(sum == 0){
               dp[i][sum]=1;
           } 
           else{
               int op1 = (sum<prices[i])?0:dp[i][sum-prices[i]];
               int op2 = (i-1 == 0)?0:dp[i-1][sum];
               dp[i][sum]=(op1+op2)%mod;
           }

        }
        
    }
    

cout<<dp[no_of_coins][target];
return 0;
    
}
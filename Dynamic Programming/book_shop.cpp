#include<iostream>
using namespace std;

int main(void)
{
    int n,x;
    cin>>n>>x;
    int price[n+1];
    for (int i = 1; i <=n; i++)
    {
        cin>>price[i];
    }
    int pages[n+1];
    for (int i = 1; i <=n; i++)
    {
        cin>>pages[i];
    }
    
    

    //dp[no_of_books][money] = max no of pages
    int dp[n+1][x+1];
    //dp[0][x] = 0;//cant get any page if books is zero


    for (int  i = 0; i < n+1; i++) //no of books
    {
        for (int money = 0; money <=x; money++)
        {
            if (money == 0 || i ==0)
            {
                dp[i][money] = 0;
            }
        else{
                    int op1 = (i == 1)?0:dp[i-1][money];
                    int op2 = (money-price[i]<0)?0:dp[i-1][money-price[i]]+pages[i];
                    dp[i][money] = max(op1,op2);

            }
            
        }
        
    }
cout<<dp[n][x];
return 0;
}
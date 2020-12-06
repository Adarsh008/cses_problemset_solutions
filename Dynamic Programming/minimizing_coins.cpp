#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main(void){
    int n,x;
    cin>>n>>x;
    vector<int>coins(n);
    for (int i = 0; i < n; i++)
    {
        cin>>coins[i];
    }
    vector<int> min_coin(x+1,1e9);
    min_coin[0] = 0;
    for(int i = 1; i<=x; i++) // for min_coins[] array
    {
        for (int j = 0; j < n; j++)
        {
            if(i-coins[j] >= 0){
                min_coin[i] = min(min_coin[i],min_coin[i-coins[j]]+1);
            }
           
        }
        
    }
    cout<<(min_coin[x] == 1e9 ? -1 : min_coin[x])<<endl;
}
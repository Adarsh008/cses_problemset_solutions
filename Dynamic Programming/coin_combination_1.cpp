#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(void){
    int n,x;
    int mod = 1e9+7;
    cin>>n>>x;
    vector<int>coins(n);
    for (int i = 0; i < n; i++)
    {
        cin>>coins[i];
    }
    vector<int> num_of_ways(x+1,0);
    num_of_ways[0] = 1;
    for(int i = 1; i<=x; i++) // for num_of_wayss[] array
    {
        for (int j = 0; j < n; j++)
        {
            if(i-coins[j] >= 0){
                int l = num_of_ways[i-coins[j]];
                (num_of_ways[i] += l)%= mod;
            }
           
        }
        
    }
    cout<<(num_of_ways[x] == 1e9 ? -1 : num_of_ways[x])<<endl;
}
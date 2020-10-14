#include<iostream>
#include<vector>
using namespace std;
#define ll long long


int main(void){
    int n;
    cin>>n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    ll current_max = arr[0],global_max= arr[0];
    for (int i = 1; i < n; i++)
    {
        current_max = max(arr[i]+current_max,arr[i]);
        global_max = max(global_max,current_max);
        
    }
    cout<< global_max; 
    return 0;
}
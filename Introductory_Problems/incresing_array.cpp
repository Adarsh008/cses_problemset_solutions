#include<iostream>
using namespace std;
#define ll long long

int main(void){
    ll n;
    cin>>n;
    ll arr[n];
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for ( ll i = 0; i < n-1; i++)
    {   
       while (arr[i+1]<arr[i])
       {
           arr[i+1]++;
           count++;
       }
    }
    cout<<count<<"\n";     
}
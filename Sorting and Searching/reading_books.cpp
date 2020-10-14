#include<iostream>
#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(void){
    ll n;
    cin>>n;
    vector<ll>arr;
    ll ls =0,sum=0;
    ll k =0;
    for (ll i = 0; i < n; i++)
    {
        cin>>k;
        arr.push_back(k);
    }

    sort(arr.begin(),arr.end());
    ll j =0;
    while (j!=n-1)
    {
        ls = ls + arr[j];
        j++;
    }
    
    sum = max(ls,arr[n-1]);
    if(ls == sum){sum = ls +arr[n-1];}
    else{ sum = 2*arr[n-1];}
    cout<<sum;
    
}
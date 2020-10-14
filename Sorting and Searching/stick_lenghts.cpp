#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

ll calculate(int arr[],int n){
    int median= (n)/2;
    ll diff =0;
    for (int i = 0; i < n; i++)
    {
        diff = abs(arr[median]-arr[i])+diff;
    }
    return diff;
}

int main(void){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<calculate(arr,n);
}
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(void){
    vector<pair<long long,long long>> vop;
    long long n;
    cin>>n;
    for (long long i = 0; i < n; i++)
    {
        long long a,d;
        cin>>a>>d;
        vop.push_back({a,d});
    }
    sort(vop.begin(),vop.end());
    long long d=0,f=0,max=0;
    for(auto ele : vop){
        f = f+ ele.first;
        max = max + ele.second - f;
    }
    cout<<max;
}
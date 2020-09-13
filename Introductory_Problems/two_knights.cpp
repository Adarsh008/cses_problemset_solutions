#include<iostream>
#define ll long long
using namespace std;

int main(void){
    
    ll n;
    cin>>n;
        for (ll i = 1; i <= n; i++)
        {   
            ll totalPos = (i*i)*(i*i-1) / 2;
            ll attackPos = 4*(i-1)*(i-2);
            ll ans = totalPos - attackPos;
            cout<<ans<<endl;
            
        }
    
}
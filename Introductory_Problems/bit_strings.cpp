#include<iostream>
using namespace std;

#define lli long long int

const lli mod = 1e9+7;

lli power(lli x,lli n,lli mod){
    lli ans = 1;
    //(x^n) mod p  (2^n)
while (n--)
{
    ans = (ans*x)%mod;
}
 
return ans;
}



int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n;
    cin>>n;
    cout<<power(2,n,mod)<<endl;
    return 0;
}


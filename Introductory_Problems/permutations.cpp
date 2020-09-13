#include<iostream>
using namespace std;
#define ll long long

int main(void){
    string str;
    ll n;
    cin>>n;
    if (n == 2 || n ==3)
    {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    else
    {   
        for (ll i2 = 2; i2 <= n; i2+=2)
        {
            cout<<i2<<" ";
        }

        for (ll i = 1; i <=n; i+=2)
        {
            cout<<i<<" ";    
        }    
    }       
    return 0;
}
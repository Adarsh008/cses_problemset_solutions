#include<iostream>
#define ll long long
using namespace std;
int main(void){
    ll n;
    cin>>n;
    cout<<n<<" ";
    do
    {
        if(n%2==0){
            n = n/2;
            cout<<n<<" ";
        }
        if (n==1)
        {
            break;
        }
        
        if (n%2==1)
        {
            n = 3*n+1;
            cout<<n<<" ";
        }
        
    } while (n!=1);
    
return 0;
}
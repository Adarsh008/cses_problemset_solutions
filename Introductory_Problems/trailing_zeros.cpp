#include<iostream>
#define ll long long
using namespace std;

int main(void){
ll n;
ll ans;
ll sum = 0 ;
cin>>n;

while (n>=5)
{
    ans = n/5;
    sum = sum + ans;
    n = ans;
}
    cout<<sum<<endl;    
}
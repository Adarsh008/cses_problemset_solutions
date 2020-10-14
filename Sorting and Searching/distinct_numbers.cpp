#include<iostream>
#define ll long long
using namespace std;
ll l =1;

void solve(){
ll n =0;
cin>>n;
ll arr[n];
for (ll i = 0; i < n; i++)
{
    cin>>arr[i];
}

for (ll i = 1; i <n; i++)
{   ll j =0;
    for (j= 0; j < i; j++)
    {
        if (arr[i]==arr[j])
        {
            break;
        }
        
    }
    if (i==j)
    {
        l++;
    }
}


}

int main(void){
solve();
cout<<l;
return 0;
}
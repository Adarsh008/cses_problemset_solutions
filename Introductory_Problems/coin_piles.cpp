#include<iostream>
#define ll long long
using namespace std;
int main(void){
int t;
ll a,b;
cin>>t;
    while (t--)
    {
      cin>>a>>b;
      if (((a+b)%3 == 0 )&& (2*min(a,b)>=max(a,b)))
      {
         cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
      

    }


}
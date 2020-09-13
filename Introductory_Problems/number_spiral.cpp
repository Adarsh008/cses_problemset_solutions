#include<iostream>
#define ll  long long
using namespace std;

int main(void){
    ll r,c;
    ll tc;
    cin>>tc;
    while (tc--)
    {
        cin>>r>>c;
        ll ans;
        if (r<c)
            {
                if (c%2==0)
                {
                    ans = (c-1)*(c-1)+r;
                }
                else
                {
                    ans = (c*c)-r+1;
                }
            
                
            }
        else
            {
            
                if (r%2 == 0)
                {
                    ans = (r*r)-c+1;
                }
                else
                {
                    ans = (r-1)*(r-1)+c;
                }

            }


        cout<<ans<<endl;
    }

return 0;
}
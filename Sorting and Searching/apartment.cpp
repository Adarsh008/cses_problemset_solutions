#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
 
 
int main(void){
ll res =0 ;
ll app=0,apart=0,diff=0;
cin>>app>>apart>>diff;
ll apps[app];
ll aparts[apart];
for (int i = 0; i < app; i++)
{
    cin>>apps[i];
}
for (int i = 0; i < apart; i++)
{
    cin>>aparts[i];
}
sort(apps,apps+app);
sort(aparts,aparts+apart);
 
int j=0,i=0;
while(i < app && j < apart){
 
if (abs(apps[i]-aparts[j])<=diff)
        {
            res++;
            i++;
            j++;
        }
        else if (apps[i]<aparts[j])
        {
            i++;
        }
        else{
            j++;
        }
 
 
} 
 
 
cout<<res<<endl;
    return 0;
}
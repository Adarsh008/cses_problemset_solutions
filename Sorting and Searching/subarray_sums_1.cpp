#include<iostream>
#include<map>
 
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<long long , long long> post_sum;
    long long curr_sum= 0,res =0;
    long long n,tar;
    cin>>n>>tar;
    long long arr[n];
    int i=0;
    while(i<n)
    {   
        cin>>arr[i];
        curr_sum = curr_sum+arr[i];
        if (curr_sum == tar)
        {
            res++;
        }
        if (post_sum.find(curr_sum-tar)!=post_sum.end())
        {
            res = res+post_sum[curr_sum-tar];
        }
        
        post_sum[curr_sum]++;
        i++;
    }
    cout<<res;
    return 0;
}
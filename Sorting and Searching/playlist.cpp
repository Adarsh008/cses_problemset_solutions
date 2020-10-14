#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin>>n;
    vector<int>arr(n);
    map<int,int>freq;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int curr_len =0,max_len =0,i=0,j=0;
    while (j<n)
    {
        if (freq.find(arr[j])==freq.end() || freq[arr[j]]==0)
        {
            freq[arr[j]]++;
            curr_len++;
            max_len = max(max_len,curr_len);
            j++;
        }
        else
        {
            curr_len--;
            freq[arr[i]]--;
            i++;
        }
        
    }
    cout<<max_len;

}
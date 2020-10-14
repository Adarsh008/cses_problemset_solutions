#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        while(!s.empty()&&arr[i]<= arr[s.top()])
        {
            s.pop();
        }
        
        if(s.empty()){
            cout<<"0"<<" ";
        }
       else
       {
           cout<<s.top()+1<<" ";
       }

        s.push(i);
    }
    
    
}
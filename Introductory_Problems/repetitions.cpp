#include<iostream>
#include<cstring>

using namespace std;

int main(void){
    string s;
    cin>>s;
    int n;
    n = s.length();
    char arr[n+1];
    strcpy(arr,s.c_str());
    int ans=0,temp =1,hack=0;
    for (int i = 1; i < n+1; i++)
        {
            
            if (s[i] == s[i-1])
                {
                    temp++;
                }
            else
                {
                    hack =1;
                    ans = max(ans,temp);
                    temp = 1;
                } 
        }
    if (hack)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<temp;
    }
    
    
    
return 0;
}
#include<iostream>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int arr[n+1];
    for (int i = 1; i <= n-1; i++)
    {   
        int temp;
        cin>>temp;
        arr[temp] = 1;
    }
    for (int i = 1; i <= n+1; i++)
    {
        if (arr[i]!= 1)
        {
            cout<<i<<endl;
            break;
        }
        
    }
return 0;
}

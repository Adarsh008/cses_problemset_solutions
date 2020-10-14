#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    int n,x;
    int count =0;
    cin>>n>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int i=0,j=n-1;
    while (i<j)
    {
        if (arr[j]>x)
        {
            j--;
            count++;
        }
        if (arr[i]>x)
        {
            i++;
            count++;
        }
        if (arr[i]+arr[j]<=x)
        {
            count++;
            i++;
            j--;
            
        }
        else
        {
            count++;
            j--;
            
        }
            
    }
if (i==j)
{
    count++;
}

cout<<count;
}

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void qsort(int a[], int b[], int i, int j)
{
    if(i>=j)
        return;
    int left = i, right = j, pivot = a[(i+j)/2];
    while(i<=j)
    {
        while(a[i]<pivot)
            i++;
        while(a[j]>pivot)
            j--;
        if(i<=j)
        {
            swap(a[i], a[j]);
            swap(b[i], b[j]);
            i++;
            j--;
        }
    }
    qsort(a, b, left, j);
    qsort(a, b, i, right);
}


int bs(int arr[], int left ,int right,int tar){
    while (left<=right)
    {
        int mid = left+(right - left)/2;
        if (arr[mid] == tar)
        {
            return mid;
        }
        else if(arr[mid]>tar){
            right = mid -1;
        }
        else
        {
            left = mid+1;
        }
        
    }
return -1;
}


int main(void){
int n =0,tar=0;
cin>>n>>tar;
int arr[n],ind[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    ind[i] = i+1;
}
qsort(arr,ind,0,n-1);
//two pointer method

int i =0,j = n-1,sum =0;
bool flag=0;

while(j>0)
{
    while (i<j)
        {
            sum = arr[i]+arr[j];
            if(bs(arr,i+1,j-1,tar-sum) ==-1){
            i++;
            }
            else
            {
                cout<<ind[i]<<" "<<ind[bs(arr,i+1,j-1,tar-sum)]<<" "<<ind[j];
                flag = 1;
                break;
            }

        }
    if(flag){break;}
    j--;
    i=0;
}

if (flag == 0)
{
    cout<<"IMPOSSIBLE";
}

return 0;

}
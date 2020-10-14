#include<iostream>
using namespace std;

void qsort(int a[],int c[], int i, int l)
{
    if(i>=l)
        return;
    int left = i, right = l, pivot = a[(i+l)/2];
    while(i<=l)
    {
        while(a[i]<pivot)
            i++;
        while(a[l]>pivot)
            l--;
        if(i<=l)
        {
            swap(a[i], a[l]);
            swap(c[i], c[l]);
            i++;
            l--;
        }
    }
    qsort(a,c, left, l);
    qsort(a, c, i, right);
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , tar;
    cin>>n>>tar;
    int arr[n],pos[n],i=0,j=n-1;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        pos[i]=i+1;
    }
    qsort(arr,pos,0,n-1);
    while (i<n && j>-1)
    {
        if(arr[i]+ arr[j]== tar){
            break;
        }
        else if (arr[i]+arr[j]>tar){
            j--;
        }
        else
        {
            i++;
        }

    }
    if (i == n || i == j || j==-1)
    {
    cout<<"IMPOSSIBLE";
    }
    else
    {
        cout<<pos[i]<<" "<<pos[j];
    }
    
}
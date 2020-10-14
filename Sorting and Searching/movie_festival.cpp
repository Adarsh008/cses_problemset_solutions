#include<iostream>
using namespace std;

void quicksort(int end[],int start[],int l ,int h){
    if (l>=h)
    {
        return;
    }
    
    int low = l,high = h , pivot = end[(l+h)/2];
    
    while (l<=h)
    {
        while(end[l]<pivot){
            l++;
        }
        while(end[h]>pivot){
            h--;
        }
        if (l<=h)
        {
            swap(end[l],end[h]);
            swap(start[l],start[h]);
            l++;
            h--;
        }
        
    }
    quicksort(end,start,low,h);
    quicksort(end , start,l,high);

}

int main(void){
    int n;
    cin>>n;
    int start[n],end[n];
    int ans =1,j=0;
    for (int  i = 0; i < n; i++)
    {
        cin>>start[i]>>end[i];
    }
    quicksort(end,start,0,n-1);
    for (int i = 1; i < n; i++)
    {
        if(start[i]>=end[j]){
            ans++;
            j= i;
        }
    }
    cout<<ans;

    
}
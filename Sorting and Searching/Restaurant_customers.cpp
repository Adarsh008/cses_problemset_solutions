#include<iostream>
#include<algorithm>
using namespace std;

int findGuests(int arrl[],int exit[],int n){
int in_guest = 1, max_guests =1;
int i =1,j=0;
sort(arrl,arrl+n);
sort(exit,exit+n);
while (i<n && j<n)
{
    if(arrl[i]<=exit[j]){
        in_guest++;
        if(in_guest>max_guests){
            max_guests=in_guest;
        }
        i++;
    }
    else
    {
        in_guest--;
        j++;
    }
    
        
    }
return max_guests;
}

int main(void){
int n;
cin>>n;
int arrl[n];
int exit[n];
for (int i = 0; i < n; i++)
    {
        cin>>arrl[i];
        cin>>exit[i];
    }
cout<<findGuests(arrl,exit,n);
}
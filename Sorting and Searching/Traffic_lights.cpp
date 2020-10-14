#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(void){
    int x=0,n=0;
    cin>>x>>n;
    multiset<int>lenght = {x};
    set<int>points = {0,x};
    int point =0;
    int right=0,left=0;
    for (int i = 0; i < n; i++)
    {
        cin>>point;
        auto itr = points.upper_bound(point);
        right = *itr;
        left  = *prev(itr);
        lenght.erase(lenght.find(right-left));
        lenght.insert(point-left);
        lenght.insert(right- point);
        points.insert(itr,point);
        cout<<*lenght.rbegin()<<" ";
    }
    

}
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(void){
	vector<pair<int,pair<int,int>>> zmp;
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		int a,d;
		cin>>a>>d;
		zmp.push_back({a,{-1,i}});
		zmp.push_back({d,{1,i}});
	}
	sort(zmp.begin(),zmp.end());
	int in_or_out,ind,occupied =0,max_room=0;
	vector<int>rooms;
	int ans[200000];
	// vector<pair<int,pair<int,int>>> :: iterator itr;
	for(auto itr : zmp){
		in_or_out = itr.second.first;
		ind = itr.second.second;
		if (in_or_out == 1)
		{
			rooms.push_back(ans[ind]);
		}
		else if(rooms.size()==occupied){
			ans[ind] = ++max_room;	
		}
		else
		{
			ans[ind]=rooms[occupied++];
		}
		
	}
cout<<max_room<<endl;
for (int i = 0; i < n; i++)
{
	cout<<ans[i]<<" ";
}

}
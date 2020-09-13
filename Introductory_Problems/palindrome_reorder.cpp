#include<iostream>
#include<string>
#include<unordered_map>


using namespace std;

string getpalindrome(string n){
    unordered_map<char,int>hmap;

    for (int i = 0; i < n.length(); i++)
    {
        hmap[n[i]]++;
    }

    int oddcount = 0;
    char oddchar ;

    for(auto x: hmap){
        if (x.second%2!= 0)
        {
            oddcount++;
            oddchar = x.first;
        }
        
    }

    if ((oddcount>1)|| (oddcount == 1 && n.length()%2 == 0))
    {
        return "NO SOLUTION";
    }

    string fhalf = "";
    string shalf = "";

    for(auto x : hmap){
        //no,char
        string S(x.second/2,x.first);
        fhalf = fhalf+ S;
        shalf = S + shalf;
    }
    
    return (oddcount == 1)?(fhalf+oddchar+shalf):
                            (fhalf+shalf);
    


}


int main(void){
    string n;
    cin>>n;
    cout <<getpalindrome(n)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
char A[8][8];
int N;

bool isValid(int row, int col){
    //for positive slope
    for (int i = row, j = col; i>=0 && j<8; i--,j++)
    {
        if (A[i][j]=='q')
        {
            return false;
        }
        
    }
    

    //for negative slope

    for (int i = row ,j = col; i>=0 && j>=0; i--,j--)
    {
        if (A[i][j]=='q')
        {
            return false;
        }
        
    }
    


    //for checking upper columns

    for (int i = row; i >=0; i--)
    {
        if(A[i][col]=='q'){
            return false;
        }
    }
    
    //for reserved block
    if (A[row][col]=='*')
    {
        return false;
    }
    
return true;
}


void count(int row){
    if (row == 8)
    {
        N++;
        return ;
    }
    

    for (int col = 0; col < 8; col++)
    {
        if (isValid(row,col))
        {
            A[row][col] = 'q';
            count(row +1);
            A[row][col] = '.';
        }
        
    }
    

}


void solve(){
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin>>A[i][j];
        }
        
    }
    count(0);

cout<<N;
cout<<endl;
}

int main(void){
    solve();
    return 0;
}
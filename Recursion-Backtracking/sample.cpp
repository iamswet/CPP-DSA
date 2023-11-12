#include "iostream"
using namespace std;

bool game(char maze[10][10], int ans[10][10],int i,int j,int m,int n){
    //base case
    if(i==m && j==n){
        ans[i][j]=1;

        //Print the path
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }

    //failure cases if the mice gets out of maze
    if(i>m || j>n){
        return false;
    }

    //check if the next move could be made or not
    if(maze[i][j]=='X')
        return false;

    //making the path as yes next move is made
    ans[i][j]=1;


    //Recursive case
    bool downsuccess=game(maze,ans,i+1,j,m,n);
    bool rightsuccess=game(maze,ans,i,j+1,m,n);

    //Backtracking case
    ans[i][j]=0;

    if(downsuccess || rightsuccess)
        return true;
    
    return false;
}


int main(){
    char maze[10][10]={
        "00X0",
        "X000",
        "XX00",
        "0000"
    };

    int ans[10][10]={0};

    game(maze,ans,0,0,3,3);

    return 0;
}
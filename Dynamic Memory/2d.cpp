#include "iostream"
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;

    int **arr=new int *[row];

    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }


    
    for(int i=0;i<row;i++){    
        int val=3;
        for(int j=0;j<col;j++){
            arr[i][j]=val;
            val+=3;
        }
    }

    for(int i=0;i<row;i++){    
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
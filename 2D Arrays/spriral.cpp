#include "iostream"
using namespace std;

int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    int sr=0,sc=0,er=3,ec=3;

    while(sr<=er && sc<=ec){
        
        for(int i=sr;i<=ec;i++){
            cout<<arr[sr][i]<<" ";
        }
        sr++;

        for(int i=sr;i<=er;i++){
            cout<<arr[i][ec]<<" ";
        }
        ec--;

        if(sr<er){
            for(int i=ec;i>=sc;i--){
                cout<<arr[er][i]<<" ";
            }
            er--;
        }

        if(sc<ec){
            for(int i=er;i>=sr;i--){
                cout<<arr[i][sc]<<" ";
            }
            sc++;
        }

    }






}
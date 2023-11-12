#include "iostream"
using namespace std;

void find(int arr[4][4],int num,int n){
    int i=0,j=(n-1);
    while(i<n && j>=0){
        if(arr[i][j]==num){
            cout<<num<<" is found at "<<i<<","<<j<<endl;
        }

        if(arr[i][j]>num){
            j--;
        }
        else{
            i++;
        }
    }
}

int main(){
    int arr[4][4]={{10,20,30,40},
                   {15,25,35,45},
                   {27,29,37,48},
                   {32,33,39,50}};

    find(arr,27,4);
    return 0;
}
#include "iostream"
using namespace std;

void rotate(int arr[][4],int arr2[][4],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr2[(m-1)-j][i]=arr[i][j];
        }
    }
}

int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4]={0};

    rotate(arr,arr2,3,4);

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}

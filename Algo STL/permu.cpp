#include "iostream"
#include "algorithm"
using namespace std;

int main(){
    int arr[]={1,2,4,3,5,6,7};
    rotate(arr,arr+2,arr+5);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    next_permutation(arr,arr+5);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}
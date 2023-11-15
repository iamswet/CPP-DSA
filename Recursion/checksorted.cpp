#include "iostream"
using namespace std;

bool checking(int arr[],int len,int i){
    if(i==len)
        return true;
    
    if(arr[i+1]>arr[i]){
        return checking(arr,len,i+1);
    }
    return false;
}


int main(){

    int num[]={1,2,3,40,5,6};
    cout<<checking(num,6,0);

    return 0;
}
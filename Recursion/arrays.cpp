#include "iostream"
using namespace std;

int totaloccur(int arr[],int len,int i,int key,int j){
    if(i==len){
        return j;
    }
    if(arr[i]==key){
        return totaloccur(arr,len,i+1,key,++j);
    }

    return totaloccur(arr,len,i+1,key,j);
}

int lastoccur(int arr[],int len,int i,int key){
    
    if(i==len){
        return -1;
    }

    if(arr[len-i-1]==key){
        return (len-i-1);
    }

    return lastoccur(arr,len,i+1,key);
}



int firstoccur(int arr[],int len,int i,int key){
    if(i==len){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstoccur(arr,len,i+1,key);
}

int main(){

    int array[]={1,2,3,4,6,4,6,8,2,3,6};
    int num=sizeof(array)/sizeof(int);
    cout<<firstoccur(array,num,0,6)<<endl;
    cout<<lastoccur(array,num,0,6)<<endl;
    cout<<totaloccur(array,num,0,6,0)<<endl;
    return 0;
}
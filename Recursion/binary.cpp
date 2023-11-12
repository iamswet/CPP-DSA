#include "iostream"
using namespace std;

int binarysearch(int arr[],int s,int e,int key){
    int mid = (s+e)/2;
    if(s>e)
        return -1;
        
    if(arr[mid]==key) 
        return mid;
    
    else if(arr[mid]>key)
        return binarysearch(arr,s,mid-1,key);
    else if(arr[mid]<key)
        return binarysearch(arr,mid+1,e,key);

    return -1;
}

int main(){
    int array1[]={10,20,30,70,80,90,100};
    int len=sizeof(array1)/sizeof(int);

    if(binarysearch(array1,0,len,60)!=-1)
        cout<<"At index: "<<binarysearch(array1,0,len,90)<<endl;
    else
        cout<<"Element not found";
    return 0;
}
#include "iostream"
using namespace std;

void bubblesort(int a[],int len,int i){
    if(len<=1)
        return ;
    if(i==len-1){
        return bubblesort(a,len-1,0);
    }
    if(a[i]>a[i+1]){
        swap(a[i],a[i+1]);
    }
    bubblesort(a,len,i+1);
    return;
}


int main(){
    int arr[]={10,20,16,4,80,96,56,29};
    int length=sizeof(arr)/sizeof(int);
    bubblesort(arr,length,0);
    cout<<"printing to be carried out now";
    for(int i=0;i<length;i++){
        cout<<arr[i]<<"   ";
    }

}
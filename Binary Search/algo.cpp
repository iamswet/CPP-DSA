#include "iostream"
using namespace std;

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100,110,112};
    int len=sizeof(arr)/sizeof(int);
    int start=0,end=len;
    int key;cin>>key;
    int counter=0;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            cout<<key<<" found at "<<mid<<endl;
            break;
        }
        else if(arr[mid]>key){
            end=mid-1;
            counter++;
        }
        else{
            start=mid+1;
            counter++;
        }
    }

    cout<<"Total count is "<<counter;



    return 0;
}
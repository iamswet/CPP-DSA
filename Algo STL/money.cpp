#include "iostream"
#include "algorithm"
using namespace std;

int main(){
    int arr[]={1,2,5,10,50,100,200,500,2000};
    int len=sizeof(arr)/sizeof(int);
    int mon;
    cin>>mon;
    int steps=0;
    while(mon!=0){
        auto ub=upper_bound(arr,arr+len,mon);
        mon=mon-arr[ub-arr-1];
        steps++;
    }
    cout<<"Total change req is: "<<steps;    



}
#include "iostream"
using namespace std;

void printypi(string arr,int len,int i=0){
    if(len<=1)
        cout<<arr;
        return;
    
    if(arr[i]=='p' && arr[i+1]=='i'){
        cout<<"hey";
        cout<<3.14;
        printypi(arr,len,i+2);
    }
    else{
        cout<<arr[i];
        printypi(arr,len,i+1);
    }
    return;
}



int main(){
    string sarree="xpiisnopif";
    cout<<sarree[4];
    printypi(sarree,sarree.length(),0);

    return 0;
}
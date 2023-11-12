#include "iostream"
using namespace std;

int unique(int arr[],int n){
    int ans=0;
    for (int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}


int main(){
    int l1=[1,2,3,4,3,2,1];
    cout<<unique(l1,7);

    return 0;
}
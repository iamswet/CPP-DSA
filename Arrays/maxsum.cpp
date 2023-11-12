#include "iostream"
#include "climits"
using namespace std;

int main(){
    int arr[]={-4,1,3,-2,6,2,-1,-4,-7},msum=INT_MIN,nsum;
    for(int i=0;i<9;i++)
        for(int j=i;j<9;j++){
            nsum=0;
            for(int k=i;k<=j;k++)
                nsum+=arr[k];
            if(msum<nsum)  
                msum=nsum;  
        }
    cout<<"Max sum is: "<<msum;

    return 0;
}
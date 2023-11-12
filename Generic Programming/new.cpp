#include "iostream"
using namespace std;

template<typename Fish>

Fish summed(Fish arr[],Fish twerk,int n){
    for(int i=0;i<n;i++){
        twerk+=arr[i];
    }
    return twerk;
}

int main(){
    int a[]={10,20,30,40,50},num=0;
    string ar[]={"HEY ","THIS IS ","OBNOXIOUS"},var="already given ";

    cout<<summed(a,num,5)<<endl;
    cout<<summed(ar,var,3)<<endl;

}
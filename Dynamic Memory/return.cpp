#include "iostream"
using namespace std;

int* mine(){
    int *a= new int[5]{0,1,2,3,4};
    cout<<a<<endl;
    cout<<a[0]<<endl;   
    return a;
}

int main(){
    int *var=mine();
    cout<<var<<endl;

    cout<<var[0]<<endl;
    for(int i=0;i<5;i++){
        cout<<var[i]<<endl;
    }
    delete [] var;

    return 0;
}
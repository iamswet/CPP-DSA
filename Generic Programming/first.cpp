#include "iostream"
using namespace std;

template<typename T>
int rectify(T arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}

int main(){
    int arr1[]={10,20,30,40,50,60,70,80};
    float arr2[]={1.6,1.8,1.66,6.7,5.4};
    string arr3[]={"This","That","These","Those"};

    rectify(arr1,5);
    cout<<endl<<endl;
    cout<<rectify(arr2,3)<<endl<<endl;
    rectify(arr3,4);
    
    return 0;
}
#include "iostream"
#include "algorithm"
using namespace std;

int main(){

    int arr[]={10,10,20,30,30,40,50,60};
    auto bs=binary_search(arr,arr+7,30);
    cout<<bs<<endl;
    auto lb=lower_bound(arr,arr+7,30);
    auto ub=upper_bound(arr,arr+7,30);
    cout<<"Total occurences are: "<<ub-lb;


    return 0;
}
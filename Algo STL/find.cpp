#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    auto it=find(arr,arr+5,20);
    int ind=it-arr;
    cout<<ind<<endl<<endl<<endl;;

    vector <int> d{1,2,3,4,5,6,7,8,9};
    auto it2=find(d.begin(),d.end(),5);
    int index=it2-d.begin();
    cout<<index;

    return 0;
}
#include "iostream"
using namespace std;

int main(){
    int num;
    cin>>num;

    int *ptr=new int[num] ;    // using the new keyword we made it dynamic
    cin>>*ptr;            

    cout<<*ptr;

    delete ptr;

    return 0;
}
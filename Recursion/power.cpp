#include "iostream"
using namespace std;

int powernum(int n,int iter){
    if(iter==1){
        return n;
    }

    return n*powernum(n,iter-1);
}

int main(){

    cout<<powernum(2,4);
    
}
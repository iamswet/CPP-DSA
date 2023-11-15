#include "iostream"
using namespace std;

int powernum(int n,int iter){
    if(iter==1){
        return n;
    }

    return n*powernum(n,iter-1);
}

int fastpower(int n,int iter){
    if(iter==0){
        return 1;
    }
    int smallerans=fastpower(n,iter/2);
    smallerans *=smallerans;

    if(iter & 1){
        return smallerans * n;
    }
    return smallerans;
}

int main(){

    cout<<powernum(2,4);
    
}
